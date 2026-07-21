
void __thiscall FUN_0049a500(void *this,undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  uint uVar1;
  STFishC *this_00;
  uint index;
  undefined4 extraout_EDX;
  short sVar2;
  short sVar4;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  int local_8;
  int iVar3;
  int iVar5;
  
  index = 0;
  uVar1 = *(uint *)(*(int *)((int)this + 0x29) + 0xc);
  if (*(short *)((int)this + 0x27) != 0) {
    iVar3 = 0;
    sVar2 = 0;
    iVar5 = 0;
    sVar4 = 0;
    local_8 = 0;
    local_c = 0;
    if (uVar1 != 0) {
      do {
        DArrayGetElement(*(DArrayTy **)((int)this + 0x29),index,&local_10);
        if ((short)local_10 != -1) {
          this_00 = (STFishC *)
                    STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,
                               CONCAT31((int3)((uint)extraout_EDX >> 8),
                                        *(undefined1 *)((int)this + 0x24)),local_10,CASE_1);
          STFishC::sub_004162B0
                    (this_00,(undefined2 *)&local_14,(undefined2 *)&local_18,(undefined2 *)&local_1c
                    );
          iVar5 = iVar5 + local_14;
          iVar3 = iVar3 + local_18;
          local_8 = local_8 + local_1c;
        }
        sVar4 = (short)iVar5;
        sVar2 = (short)iVar3;
        local_c = local_c + 1;
        index = local_c & 0xffff;
      } while (index < uVar1);
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)((int)sVar4 / (int)(uint)*(ushort *)((int)this + 0x27));
    }
    if (param_2 != (undefined2 *)0x0) {
      *param_2 = (short)((int)sVar2 / (int)(uint)*(ushort *)((int)this + 0x27));
    }
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = (short)((int)(short)local_8 / (int)(uint)*(ushort *)((int)this + 0x27));
    }
  }
  return;
}

