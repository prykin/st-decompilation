
undefined4 __thiscall
thunk_FUN_0056a2a0(void *this,uint *param_1,char *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame IStack_4c;
  void *pvStack_8;
  
  if (((*(int *)((int)this + 0xf8b) != 0) && (param_2 != (char *)0x0)) && (param_1 != (uint *)0x0))
  {
    IStack_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &IStack_4c;
    pvStack_8 = this;
    iVar3 = Library::MSVCRT::__setjmp3(IStack_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    if (iVar3 == 0) {
      if ((*(uint *)(*(int *)(*param_1 + 4) + 8) & 0x100000) == 0) {
        puVar4 = (uint *)FUN_00719d00(param_1,param_2,0,0);
      }
      else {
        puVar4 = (uint *)cMf32::vmAddrRecGet((cMf32 *)param_1,2,param_2,0);
      }
      pvVar2 = pvStack_8;
      if (puVar4 != (uint *)0x0) {
        if (param_3 < 1) {
          iVar3 = *(int *)((int)pvStack_8 + 0xe07);
          uVar1 = *param_1;
          if (iVar3 < 0) {
            if ((*(uint *)(*(int *)(uVar1 + 4) + 8) & 0x100000) == 0) {
              uVar6 = FUN_006c1390(puVar4,0,0x48,DAT_0080730a,0,0,1);
              *(undefined4 *)((int)pvVar2 + 0xe07) = uVar6;
            }
            else {
              iVar3 = Library::DKW::SND::FUN_006c2530(uVar1,(DWORD)puVar4,0,0x48,DAT_0080730a,0,0,1)
              ;
              *(int *)((int)pvVar2 + 0xe07) = iVar3;
            }
          }
          else if ((*(uint *)(*(int *)(uVar1 + 4) + 8) & 0x100000) == 0) {
            FUN_006c1390(puVar4,0,0x48,DAT_0080730a,0,iVar3,iVar3);
          }
          else {
            Library::DKW::SND::FUN_006c2530(uVar1,(DWORD)puVar4,0,0x48,DAT_0080730a,0,iVar3,iVar3);
          }
        }
        else {
          *(int *)((int)pvStack_8 + 0xdfb) = param_3;
          *(undefined4 *)((int)pvStack_8 + 0xe03) = *(undefined4 *)((int)pvStack_8 + 0xe07);
          if ((*(uint *)(*(int *)(*param_1 + 4) + 8) & 0x100000) == 0) {
            iVar3 = FUN_006c1390(puVar4,0,0,DAT_0080730a,0,0,1);
          }
          else {
            iVar3 = Library::DKW::SND::FUN_006c2530(*param_1,(DWORD)puVar4,0,0,DAT_0080730a,0,0,1);
          }
          *(int *)((int)pvVar2 + 0xe07) = iVar3;
          DVar5 = timeGetTime();
          *(DWORD *)((int)pvVar2 + 0xdff) = DVar5;
        }
        if (param_4 != (undefined4 *)0x0) {
          uVar6 = FUN_006c23f0((short *)puVar4);
          *param_4 = uVar6;
        }
      }
      g_currentExceptionFrame = IStack_4c.previous;
      return 0;
    }
    g_currentExceptionFrame = IStack_4c.previous;
  }
  return 0xffffffff;
}

