
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0074D6DE -> EXTERNAL:0000000F @ 0074D708 */

void FUN_0074d6de(undefined4 param_1,LPWSTR lpWideCharStr)

{
  CHAR local_24 [32];
  
  wsprintfA(local_24,&DAT_007c1890,param_1);
  MultiByteToWideChar(0,0,local_24,-1,lpWideCharStr,0x20);
  return;
}

