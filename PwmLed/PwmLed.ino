void setup()
{
  pinMode(11,OUTPUT);          //数字口要选择带#号的具有pwm功能的输出口
}

void loop()
{
  int n = analogRead(A0);     //读取A0模拟口的数值（0-5V 对应 0-1204取值）
  analogWrite(11,n/4);         //PWM最大取值255  所以将模拟口的取值n除以4
}
