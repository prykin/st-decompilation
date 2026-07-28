
undefined4 __thiscall FUN_00495750(void *this,float param_1)

{
  float fVar1;
  uint uVar2;
  DWORD DVar3;
  undefined4 uVar4;
  longlong lVar5;
  CHAR local_6c [100];
  float local_8;

  fVar1 = param_1;
  FUN_006e5fd0(this,(STMessage *)param_1);
  uVar2 = *(uint *)((int)fVar1 + 0x10);
  if (uVar2 < 0x61) {
    if (uVar2 == 0x60) {
      *(uint *)((int)this + 0x1c) = (uint)*(ushort *)((int)fVar1 + 0x18);
      *(uint *)((int)this + 0x20) = (uint)*(ushort *)((int)fVar1 + 0x1a);
      return 0;
    }
    switch(uVar2) {
    case 2:
      uVar2 = FUN_006e4d40(*(void **)((int)this + 0x10),*(int *)((int)this + 0xc));
      if (uVar2 == 1) {
        DVar3 = timeGetTime();
        *(DWORD *)((int)this + 0x24) = DVar3;
        return 0;
      }
      break;
    case 3:
      FUN_006e4d40(*(void **)((int)this + 0x10),*(int *)((int)this + 0xc));
      return 0;
    }
  }
  else if ((uVar2 != 0x61) && (uVar2 == 0x8102)) {
    FUN_006e1c20(PTR_00807598,*(float *)((int)this + 0x1c),*(int *)((int)this + 0x20),0.0,&local_8,
                 &param_1);
    lVar5 = Library::MSVCRT::__ftol();
    uVar4 = (undefined4)lVar5;
    lVar5 = Library::MSVCRT::__ftol();
    wsprintfA(local_6c,"\n X = %d\n Y = %d\n Xc = %d\n Yc = %d",*(undefined4 *)((int)this + 0x1c),
              *(undefined4 *)((int)this + 0x20),(int)lVar5,uVar4);
    MessageBoxA(g_hWnd_00806748,local_6c,"Coordinates of Mouse",0x40);
  }
  return 0;
}

