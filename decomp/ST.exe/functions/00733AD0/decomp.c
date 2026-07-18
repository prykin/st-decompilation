
/* Library Function - Single Match
    _ctrlevent_capture@4
   
   Library: Visual Studio 2003 Debug
   __stdcall ctrlevent_capture,4 */

undefined4 ctrlevent_capture(int param_1)

{
  undefined4 uVar1;
  code *local_10;
  undefined4 *local_c;
  undefined4 local_8;
  
  if (param_1 == 0) {
    local_c = &DAT_008571e4;
    local_10 = DAT_008571e4;
    local_8 = 2;
  }
  else {
    local_c = &DAT_008571e8;
    local_10 = DAT_008571e8;
    local_8 = 0x15;
  }
  if (local_10 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    if (local_10 != (code *)0x1) {
      *local_c = 0;
      (*local_10)(local_8);
    }
    uVar1 = 1;
  }
  return uVar1;
}

