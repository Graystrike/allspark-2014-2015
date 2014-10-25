




bool DriveThreshCheck( int parl,int thresh)

{
	return (abs(parl)>thresh);

}

void fatman()
{
	int ljoy = joystick.joy1_y1;
  int rjoy = joystick.joy1_y2;
  if (!DriveThreshCheck(ljoy,20))
  {
  	ljoy = 0;


  }
  if (!DriveThreshCheck(rjoy,20))
  {
  	rjoy = 0;
  }

  motor[front_left]= ljoy;
  motor[back_left]= ljoy;
  motor[front_right]= rjoy;
  motor[back_right]= rjoy;
}
