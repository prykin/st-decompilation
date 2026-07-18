
void __thiscall thunk_FUN_005a2ff0(void *this,int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *_Str2;
  char *_Str1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar9;
  undefined4 uStack_50;
  undefined4 auStack_4c [16];
  void *pvStack_c;
  int iStack_8;
  
  if ((*(char *)((int)this + 0x1a5f) == '\x06') && (*(char *)((int)this + 0x1a60) != '\0')) {
    uStack_50 = DAT_00858df8;
    DAT_00858df8 = &uStack_50;
    pvStack_c = this;
    iVar5 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
    pvVar4 = DAT_00802a30;
    if (iVar5 == 0) {
      if (DAT_00802a30 != (void *)0x0) {
        uVar6 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
        uVar2 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
        *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
        *(undefined2 *)((int)pvVar4 + 0x494) = 0xffff;
        thunk_FUN_0054bf40(0,uVar2,uVar6);
        thunk_FUN_00543c90(pvVar4,*(int *)((int)pvVar4 + 0xc5),*(int *)((int)pvVar4 + 0xc9));
        *(undefined1 *)((int)pvVar4 + 0xd2) = 0;
        *(undefined4 *)((int)pvVar4 + 0x4df) = 0xffffffff;
      }
      pvVar4 = pvStack_c;
      *(undefined4 *)(*(int *)((int)pvStack_c + 0x1eaa) + 0xc) = 0;
      for (; param_1 != 0; param_1 = param_1 + -1) {
        FUN_006ae1c0(*(uint **)((int)pvVar4 + 0x1eaa),param_2);
        param_2 = param_2 + 0x1a;
      }
      do {
        iVar5 = *(int *)((int)pvVar4 + 0x1eaa);
        iStack_8 = 0;
        uVar8 = *(uint *)(iVar5 + 0xc);
        uVar9 = 0;
        if (uVar8 != 1) {
          do {
            if (uVar9 < uVar8) {
              _Str1 = (char *)(*(int *)(iVar5 + 8) * uVar9 + *(int *)(iVar5 + 0x1c));
            }
            else {
              _Str1 = (char *)0x0;
            }
            uVar1 = uVar9 + 1;
            if (uVar1 < uVar8) {
              _Str2 = (char *)(*(int *)(iVar5 + 8) * uVar1 + *(int *)(iVar5 + 0x1c));
            }
            else {
              _Str2 = (char *)0x0;
            }
            iVar5 = __strcmpi(_Str1,_Str2);
            if (0 < iVar5) {
              FUN_006b0cd0(*(int *)((int)pvVar4 + 0x1eaa),uVar9,uVar1);
              iStack_8 = 1;
            }
            iVar5 = *(int *)((int)pvVar4 + 0x1eaa);
            uVar8 = *(uint *)(iVar5 + 0xc);
            uVar9 = uVar1;
          } while (uVar1 < uVar8 - 1);
        }
      } while (iStack_8 != 0);
      FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0xf3);
      thunk_FUN_00540620(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',
                         *(BITMAPINFO **)((int)pvVar4 + 0x1e9a));
      *(undefined4 *)((int)pvVar4 + 0x2d) = 0x28;
      *(undefined4 *)((int)pvVar4 + 0x31) = *(undefined4 *)(*(int *)((int)pvVar4 + 0x1eaa) + 0xc);
      *(undefined2 *)((int)pvVar4 + 0x35) = 1;
      FUN_006e6080(pvVar4,2,*(undefined4 *)((int)pvVar4 + 0x1b20),(undefined4 *)((int)pvVar4 + 0x1d)
                  );
      *(undefined4 *)((int)pvVar4 + 0x2d) = 0x20;
      if ((*(int *)(*(int *)((int)pvVar4 + 0x1eaa) + 0xc) == 0) ||
         (*(int *)((int)pvVar4 + 0x1a6b) == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined4 *)((int)pvVar4 + 0x31) = uVar6;
      FUN_006e6080(pvVar4,2,*(undefined4 *)((int)pvVar4 + 0x1b20),(undefined4 *)((int)pvVar4 + 0x1d)
                  );
      DAT_00858df8 = (undefined4 *)uStack_50;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_50;
    iVar7 = FUN_006ad4d0(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa9d,0,iVar5,&DAT_007a4ccc);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7cbf70,0xa9d);
  }
  return;
}

