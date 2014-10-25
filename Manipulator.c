
void Manipulator()
{

	if (joy1Btn(5) == 1)
	{
		motor [pulleyMotor1] = 100;
		motor [pulleyMotor2] = 100;
	}

	if (joy1Btn(7) == 1)
	{
		motor [pulleyMotor1] = -100;
		motor [pulleyMotor2] = -100;
	}

	motor [pulleyMotor1] = 0;
	motor [pulleyMotor2] = 0;

}
