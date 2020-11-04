# GT1151

## 简介

gt1151 软件包提供了使用触摸芯片 gt1151 基本功能，并且本软件包已经对接到了 Touch 框架，通过 Touch 框架，开发者可以快速的将此触摸芯片驱动起来。
## 支持情况

| 包含设备           | 触摸芯片 |  
| ----------------     | -------- | 
| **通讯接口**      |          |      
| IIC              | √        | 
| **工作模式**     |          |     
| 中断             | √        | 
| 轮询             |   √       |        

## 使用说明

### 依赖

- RT-Thread 4.0.0+
- Touch 组件
- I2C 驱动：gt1151 设备使用 I2C 进行数据通讯，需要系统 I2C 驱动支持；

### 获取软件包

使用 gt1151 软件包需要在 RT-Thread 的包管理中选中它，具体路径如下：

```
RT-Thread online packages  --->
  peripheral libraries and drivers  --->
    touch drivers  --->
      gt1151: touch ic gt1151 for rt-thread
			  gt1151 rts pin number  --->
              gt1151 irq pin number  --->
              gt1151 i2c bus name  --->
              gt1151 touch dev name  --->
              Version (latest)  --->
```
**Version**：软件包版本选择

### 使用软件包

gt1151 软件包初始化函数如下所示：

```
int rt_hw_gt1151_init(const char *name, struct rt_touch_config *cfg)
```

该函数需要由用户调用，函数主要完成的功能有，

- 设备配置和初始化（根据传入的配置信息，配置接口设备和中断引脚）；
- 注册相应的传感器设备，完成 gt1151 设备的注册；

#### 初始化示例

```.c
int rt_hw_gt1151_port(void)
{
    struct rt_touch_config config;
    rt_uint8_t rst;
    rst = PKG_GT1151_RST_PIN;
    config.dev_name = PKG_GT1151_I2C_BUS_NAME;
    config.irq_pin.pin  = PKG_GT1151_IRQ_PIN;
    config.irq_pin.mode = PIN_MODE_INPUT_PULLDOWN;
    config.user_data = &rst;
    rt_hw_gt1151_init(PKG_GT1151_TOUCH_DEV_NAME, &config);
    return 0;
}
INIT_ENV_EXPORT(rt_hw_gt1151_port);
```

## 注意事项

暂无

## 联系人信息

维护人:

- [547895019](https://github.com/547895019) 

- 主页：<https://github.com/547895019/gt1151>