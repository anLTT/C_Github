#include <stdio.h>
#include <stdint.h>

// 定义返回值类型
typedef enum {
	BSP_OK = 0,
	BSP_ERROR = 1,
} BSP_Status_e;

// 定义回调函数类型
typedef void (*BSP_CAN_RxCallback_t)(uint8_t* data, uint16_t len, void* user_data);

// 定义参数结构体
typedef struct {
    int some_value;
    char some_string[50];
} CallbackParams_t;

// 实现回调函数
void MyRxCallback(uint8_t* data, uint16_t len, void* user_data) {
    CallbackParams_t* params = (CallbackParams_t*)user_data;
    printf("Received data: %.*s\n", len, data);
    printf("Callback params: %d, %s\n", params->some_value, params->some_string);
}

// 设置回调函数和参数
typedef struct {
    BSP_CAN_RxCallback_t rx_callback;
    void* user_data;
} CAN_Object_t;

BSP_Status_e BSP_CAN_SetRxCallback(CAN_Object_t* obj, BSP_CAN_RxCallback_t fun, void* user_data) {
    if (obj == NULL)
        return BSP_ERROR;
    if (fun == NULL)
        return BSP_ERROR;

    obj->rx_callback = fun;
    obj->user_data = user_data;
    return BSP_OK;
}

// 模拟接收数据并调用回调函数
void simulate_receive_data(CAN_Object_t* obj, uint8_t* data, uint16_t len) {
    if (obj->rx_callback != NULL) {
        obj->rx_callback(data, len, obj->user_data);
    }
}

int main() {
    CAN_Object_t can_obj;
    CallbackParams_t params = {42, "Hello, Callback!"};

    BSP_CAN_SetRxCallback(&can_obj, MyRxCallback, &params);

    uint8_t received_data[] = "CAN Data";
    simulate_receive_data(&can_obj, received_data, sizeof(received_data) - 1);

    return 0;
}