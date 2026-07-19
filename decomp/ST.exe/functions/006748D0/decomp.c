
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006748d0(void)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  void *unaff_ESI;
  float10 fVar4;
  longlong lVar5;
  InternalExceptionFrame *pIVar6;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  DAT_007d2d18 = 0x25;
  DAT_00811914 = DAT_0081190c;
  local_8 = 0;
  if (DAT_0085755c[DAT_0081190c] == 0x30) {
    uVar1 = FUN_007306e0((uint)DAT_0085755c[DAT_0081190c + 1]);
    if (uVar1 == 0x62) {
      local_8 = 2;
    }
    else if (uVar1 == 0x78) {
      local_8 = 0x10;
    }
  }
  pIVar6 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  iVar2 = __setjmp3(local_4c,0,unaff_ESI,pIVar6);
  if (iVar2 != 0) {
    g_currentExceptionFrame = pIVar6;
    pbVar3 = DAT_0085755c;
    if (iVar2 == -0x3c) {
      while( true ) {
        if (DAT_007f148c < 2) {
          uVar1 = (byte)PTR_DAT_007f1280[(char)pbVar3[DAT_00811914] * 2] & 4;
        }
        else {
          uVar1 = FUN_00730610((int)(char)pbVar3[DAT_00811914],4);
          pbVar3 = DAT_0085755c;
        }
        if (uVar1 == 0) break;
        DAT_00811914 = DAT_00811914 + 1;
      }
      DAT_007d2d18 = 0;
      return 0xffffffc4;
    }
    if (iVar2 == -4) {
      DAT_007d2d18 = 0x84e;
    }
    return 0;
  }
  if (local_8 != 0) {
    DAT_00811914 = DAT_00811914 + 2;
    uVar1 = FUN_006b9770(DAT_0085755c,&DAT_00811914,local_8);
    _DAT_00857548 = (double)CONCAT44(DAT_0085754c,uVar1);
    g_currentExceptionFrame = pIVar6;
    return 0;
  }
  fVar4 = FUN_006c8990(DAT_0085755c,&DAT_00811914,&local_c);
  _DAT_00857548 = (double)fVar4;
  if (local_c == 0) {
    lVar5 = __ftol();
    _DAT_00857548 = (double)CONCAT44(DAT_0085754c,(int)lVar5);
    g_currentExceptionFrame = pIVar6;
    DAT_007d2d18 = 0x25;
    return 0;
  }
  DAT_007d2d18 = 0x37;
  g_currentExceptionFrame = pIVar6;
  return 0;
}

