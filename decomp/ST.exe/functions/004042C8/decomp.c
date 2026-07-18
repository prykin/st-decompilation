
void __fastcall thunk_FUN_00419df0(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)((int)param_1 + 0x1cd) == 1) {
    return;
  }
  if (*(int *)((int)param_1 + 0x1cd) == 0) {
    *(undefined4 *)((int)param_1 + 0x1cd) = 1;
    iVar4 = FUN_006aac70(0x36);
    *(int *)((int)param_1 + 0x11d) = iVar4;
    iVar4 = FUN_006aac70(0x36);
    *(int *)((int)param_1 + 0x121) = iVar4;
    iVar4 = FUN_006aac70(0x5c);
    *(int *)((int)param_1 + 0x125) = iVar4;
    iVar4 = FUN_006aac70(0x5c);
    *(int *)((int)param_1 + 0x129) = iVar4;
    uVar1 = param_1[8];
    if (uVar1 < 0x1af) {
      if (uVar1 == 0x1ae) {
        iVar4 = FUN_006aac70(0xb);
        *(int *)((int)param_1 + 0x1ad) = iVar4;
        iVar4 = FUN_006aac70(0xb);
        *(int *)((int)param_1 + 0x1b1) = iVar4;
        iVar4 = FUN_006aac70(6);
        *(int *)((int)param_1 + 0x1c5) = iVar4;
        iVar4 = FUN_006aac70(6);
        *(int *)((int)param_1 + 0x1c9) = iVar4;
      }
      else if (uVar1 < 0x173) {
        if (uVar1 != 0x172) {
          if (uVar1 == 0x14) {
            *(undefined4 *)((int)param_1 + 0x15d) = 0;
            *(undefined4 *)((int)param_1 + 0x161) = 0;
            *(undefined4 *)((int)param_1 + 0x165) = 0;
            *(undefined4 *)((int)param_1 + 0x169) = 0;
            *(undefined4 *)((int)param_1 + 0x16d) = 0;
            *(undefined4 *)((int)param_1 + 0x171) = 0;
            *(undefined4 *)((int)param_1 + 0x175) = 0;
            *(undefined4 *)((int)param_1 + 0x179) = 0;
            *(undefined4 *)((int)param_1 + 0x17d) = 0;
            *(undefined4 *)((int)param_1 + 0x181) = 0;
            iVar4 = FUN_006aac70(0x13);
            *(int *)((int)param_1 + 0x195) = iVar4;
            iVar4 = FUN_006aac70(0x13);
            *(int *)((int)param_1 + 0x199) = iVar4;
            iVar4 = FUN_006aac70(0xb);
            *(int *)((int)param_1 + 0x1ad) = iVar4;
            iVar4 = FUN_006aac70(0xb);
            *(int *)((int)param_1 + 0x1b1) = iVar4;
            iVar4 = FUN_006aac70(0x240);
            *(int *)((int)param_1 + 0x1bd) = iVar4;
            iVar4 = FUN_006aac70(0x240);
            *(int *)((int)param_1 + 0x1c1) = iVar4;
          }
          else if (uVar1 != 0x5a) goto LAB_00419f6c;
        }
      }
      else if (uVar1 != 0x1a4) {
LAB_00419f6c:
        iVar4 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x54d,0,0,&DAT_007a4ccc);
        if (iVar4 == 0) {
          return;
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (uVar1 != 0x1b8) {
      if (uVar1 == 1000) {
        *(undefined4 *)((int)param_1 + 0x12d) = 0;
        *(undefined4 *)((int)param_1 + 0x131) = 0;
        *(undefined4 *)((int)param_1 + 0x135) = 0;
        *(undefined4 *)((int)param_1 + 0x139) = 0;
        *(undefined4 *)((int)param_1 + 0x13d) = 0;
        *(undefined4 *)((int)param_1 + 0x141) = 0;
        *(undefined4 *)((int)param_1 + 0x145) = 0;
        *(undefined4 *)((int)param_1 + 0x149) = 0;
        *(undefined4 *)((int)param_1 + 0x14d) = 0;
        *(undefined4 *)((int)param_1 + 0x151) = 0;
        *(undefined4 *)((int)param_1 + 0x155) = 0;
        *(undefined4 *)((int)param_1 + 0x159) = 0;
        iVar4 = FUN_006aac70(0x129);
        *(int *)((int)param_1 + 0x185) = iVar4;
        iVar4 = FUN_006aac70(0x129);
        *(int *)((int)param_1 + 0x189) = iVar4;
        iVar4 = FUN_006aac70(0x10);
        *(int *)((int)param_1 + 0x18d) = iVar4;
        iVar4 = FUN_006aac70(0x10);
        *(int *)((int)param_1 + 0x191) = iVar4;
        *(undefined4 *)((int)param_1 + 0x19d) = 0;
        *(undefined4 *)((int)param_1 + 0x1a1) = 0;
        iVar4 = FUN_006aac70(0xc);
        *(int *)((int)param_1 + 0x1a5) = iVar4;
        iVar4 = FUN_006aac70(0xc);
        *(int *)((int)param_1 + 0x1a9) = iVar4;
        iVar4 = FUN_006aac70(0xb);
        *(int *)((int)param_1 + 0x1b5) = iVar4;
        iVar4 = FUN_006aac70(0xb);
        *(int *)((int)param_1 + 0x1b9) = iVar4;
      }
      else if (uVar1 != 0x3e9) goto LAB_00419f6c;
    }
  }
  (**(code **)(*param_1 + 0x30))(*(undefined4 *)((int)param_1 + 0x121));
  puVar5 = *(undefined4 **)((int)param_1 + 0x121);
  puVar6 = *(undefined4 **)((int)param_1 + 0x11d);
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  (**(code **)(*param_1 + 0x34))(*(undefined4 *)((int)param_1 + 0x129));
  puVar5 = *(undefined4 **)((int)param_1 + 0x129);
  puVar6 = *(undefined4 **)((int)param_1 + 0x125);
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar1 = param_1[8];
  if (uVar1 < 0x1af) {
    if (uVar1 == 0x1ae) {
      (**(code **)(*param_1 + 0x58))(*(undefined4 *)((int)param_1 + 0x1b1));
      puVar5 = *(undefined4 **)((int)param_1 + 0x1b1);
      puVar6 = *(undefined4 **)((int)param_1 + 0x1ad);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar5 + 2);
      *(undefined1 *)((int)puVar6 + 10) = *(undefined1 *)((int)puVar5 + 10);
      (**(code **)(*param_1 + 100))(*(undefined4 *)((int)param_1 + 0x1c9));
      puVar5 = *(undefined4 **)((int)param_1 + 0x1c9);
      puVar6 = *(undefined4 **)((int)param_1 + 0x1c5);
      *puVar6 = *puVar5;
      *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar5 + 1);
      return;
    }
    if (uVar1 < 0x173) {
      if (uVar1 == 0x172) {
        return;
      }
      if (uVar1 == 0x14) {
        puVar5 = (undefined4 *)((int)param_1 + 0x171);
        if (*(byte **)((int)param_1 + 0x171) != (byte *)0x0) {
          FUN_006ae110(*(byte **)((int)param_1 + 0x171));
        }
        if (*(byte **)((int)param_1 + 0x175) != (byte *)0x0) {
          FUN_006ae110(*(byte **)((int)param_1 + 0x175));
        }
        if (*(byte **)((int)param_1 + 0x179) != (byte *)0x0) {
          FUN_006ae110(*(byte **)((int)param_1 + 0x179));
        }
        if (*(byte **)((int)param_1 + 0x17d) != (byte *)0x0) {
          FUN_006ae110(*(byte **)((int)param_1 + 0x17d));
        }
        if (*(byte **)((int)param_1 + 0x181) != (byte *)0x0) {
          FUN_006ae110(*(byte **)((int)param_1 + 0x181));
        }
        *puVar5 = 0;
        *(undefined4 *)((int)param_1 + 0x175) = 0;
        *(undefined4 *)((int)param_1 + 0x179) = 0;
        *(undefined4 *)((int)param_1 + 0x17d) = 0;
        *(undefined4 *)((int)param_1 + 0x181) = 0;
        (**(code **)(*param_1 + 0x40))(puVar5);
        FUN_006afe40((int *)((int)param_1 + 0x15d),(uint *)*puVar5);
        FUN_006afe40((int *)((int)param_1 + 0x161),*(uint **)((int)param_1 + 0x175));
        FUN_006afe40((int *)((int)param_1 + 0x165),*(uint **)((int)param_1 + 0x179));
        FUN_006afe40((int *)((int)param_1 + 0x169),*(uint **)((int)param_1 + 0x17d));
        FUN_006afe40((int *)((int)param_1 + 0x16d),*(uint **)((int)param_1 + 0x181));
        (**(code **)(*param_1 + 0x4c))(*(undefined4 *)((int)param_1 + 0x199));
        puVar5 = *(undefined4 **)((int)param_1 + 0x199);
        puVar6 = *(undefined4 **)((int)param_1 + 0x195);
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
        puVar6[3] = puVar5[3];
        *(undefined2 *)(puVar6 + 4) = *(undefined2 *)(puVar5 + 4);
        *(undefined1 *)((int)puVar6 + 0x12) = *(undefined1 *)((int)puVar5 + 0x12);
        (**(code **)(*param_1 + 0x58))(*(undefined4 *)((int)param_1 + 0x1b1));
        puVar5 = *(undefined4 **)((int)param_1 + 0x1b1);
        puVar6 = *(undefined4 **)((int)param_1 + 0x1ad);
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar5 + 2);
        *(undefined1 *)((int)puVar6 + 10) = *(undefined1 *)((int)puVar5 + 10);
        (**(code **)(*param_1 + 0x60))(*(undefined4 *)((int)param_1 + 0x1c1));
        puVar5 = *(undefined4 **)((int)param_1 + 0x1c1);
        puVar6 = *(undefined4 **)((int)param_1 + 0x1bd);
        for (iVar4 = 0x90; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        return;
      }
      if (uVar1 == 0x5a) {
        return;
      }
    }
    else if (uVar1 == 0x1a4) {
      return;
    }
  }
  else {
    if (uVar1 == 0x1b8) {
      return;
    }
    if (uVar1 == 1000) {
      puVar5 = (undefined4 *)((int)param_1 + 0x135);
      if (*(byte **)((int)param_1 + 0x135) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)param_1 + 0x135));
      }
      if (*(byte **)((int)param_1 + 0x139) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)param_1 + 0x139));
      }
      *puVar5 = 0;
      *(undefined4 *)((int)param_1 + 0x139) = 0;
      (**(code **)(*param_1 + 0x38))(puVar5);
      FUN_006afe40((int *)((int)param_1 + 0x12d),(uint *)*puVar5);
      FUN_006afe40((int *)((int)param_1 + 0x131),*(uint **)((int)param_1 + 0x139));
      puVar5 = (undefined4 *)((int)param_1 + 0x14d);
      if (*(byte **)((int)param_1 + 0x14d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)param_1 + 0x14d));
      }
      if (*(byte **)((int)param_1 + 0x151) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)param_1 + 0x151));
      }
      if (*(byte **)((int)param_1 + 0x155) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)param_1 + 0x155));
      }
      if (*(byte **)((int)param_1 + 0x159) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)param_1 + 0x159));
      }
      *puVar5 = 0;
      *(undefined4 *)((int)param_1 + 0x151) = 0;
      *(undefined4 *)((int)param_1 + 0x155) = 0;
      *(undefined4 *)((int)param_1 + 0x159) = 0;
      (**(code **)(*param_1 + 0x3c))(puVar5);
      FUN_006afe40((int *)((int)param_1 + 0x13d),(uint *)*puVar5);
      FUN_006afe40((int *)((int)param_1 + 0x141),*(uint **)((int)param_1 + 0x151));
      FUN_006afe40((int *)((int)param_1 + 0x145),*(uint **)((int)param_1 + 0x155));
      FUN_006afe40((int *)((int)param_1 + 0x149),*(uint **)((int)param_1 + 0x159));
      (**(code **)(*param_1 + 0x44))(*(undefined4 *)((int)param_1 + 0x189));
      puVar5 = *(undefined4 **)((int)param_1 + 0x189);
      puVar6 = *(undefined4 **)((int)param_1 + 0x185);
      for (iVar4 = 0x4a; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      (**(code **)(*param_1 + 0x48))(*(undefined4 *)((int)param_1 + 0x191));
      puVar6 = *(undefined4 **)((int)param_1 + 0x191);
      puVar2 = *(undefined4 **)((int)param_1 + 0x18d);
      puVar5 = (undefined4 *)((int)param_1 + 0x1a1);
      *puVar2 = *puVar6;
      puVar2[1] = puVar6[1];
      puVar2[2] = puVar6[2];
      puVar2[3] = puVar6[3];
      if ((byte *)*puVar5 != (byte *)0x0) {
        FUN_006ae110((byte *)*puVar5);
        *puVar5 = 0;
      }
      if (*(byte **)((int)param_1 + 0x19d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)((int)param_1 + 0x19d));
        *(int *)((int)param_1 + 0x19d) = 0;
      }
      (**(code **)(*param_1 + 0x50))(puVar5);
      FUN_006afe40((int *)((int)param_1 + 0x19d),(uint *)*puVar5);
      (**(code **)(*param_1 + 0x54))(*(undefined4 *)((int)param_1 + 0x1a9));
      puVar5 = *(undefined4 **)((int)param_1 + 0x1a9);
      puVar6 = *(undefined4 **)((int)param_1 + 0x1a5);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      (**(code **)(*param_1 + 0x5c))(*(undefined4 *)((int)param_1 + 0x1b9));
      puVar5 = *(undefined4 **)((int)param_1 + 0x1b9);
      puVar6 = *(undefined4 **)((int)param_1 + 0x1b5);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar5 + 2);
      *(undefined1 *)((int)puVar6 + 10) = *(undefined1 *)((int)puVar5 + 10);
      return;
    }
    if (uVar1 == 0x3e9) {
      return;
    }
  }
  iVar4 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x5a5,0,0,&DAT_007a4ccc);
  if (iVar4 == 0) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

