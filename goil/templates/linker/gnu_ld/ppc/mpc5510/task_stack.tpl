  . = ALIGN(16); /* MPC5510 MPU requires 16 bytes alignment */
  __SEG_START_TASK_$TASK_NAME$_STACK_RGN = .;
  * (.$TASK_NAME$Stack)
  . = ALIGN(16);
  __SEG_END_TASK_$TASK_NAME$_STACK_RGN = . - 1;
  