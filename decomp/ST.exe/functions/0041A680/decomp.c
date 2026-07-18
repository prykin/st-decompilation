
void __fastcall FUN_0041a680(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1cd) != 1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x1cd) = 0;
  FUN_006ab060((undefined4 *)(param_1 + 0x11d));
  FUN_006ab060((undefined4 *)(param_1 + 0x121));
  FUN_006ab060((undefined4 *)(param_1 + 0x125));
  FUN_006ab060((undefined4 *)(param_1 + 0x129));
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 < 0x1af) {
    if (uVar1 == 0x1ae) {
      FUN_006ab060((undefined4 *)(param_1 + 0x1ad));
      FUN_006ab060((undefined4 *)(param_1 + 0x1b1));
      FUN_006ab060((undefined4 *)(param_1 + 0x1c5));
      FUN_006ab060((undefined4 *)(param_1 + 0x1c9));
      return;
    }
    if (uVar1 < 0x173) {
      if (uVar1 == 0x172) {
        return;
      }
      if (uVar1 == 0x14) {
        if (*(byte **)(param_1 + 0x171) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(param_1 + 0x171));
        }
        if (*(byte **)(param_1 + 0x175) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(param_1 + 0x175));
        }
        if (*(byte **)(param_1 + 0x179) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(param_1 + 0x179));
        }
        if (*(byte **)(param_1 + 0x17d) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(param_1 + 0x17d));
        }
        if (*(byte **)(param_1 + 0x181) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(param_1 + 0x181));
        }
        *(undefined4 *)(param_1 + 0x171) = 0;
        *(undefined4 *)(param_1 + 0x175) = 0;
        *(undefined4 *)(param_1 + 0x179) = 0;
        *(undefined4 *)(param_1 + 0x17d) = 0;
        *(undefined4 *)(param_1 + 0x181) = 0;
        if (*(byte **)(param_1 + 0x15d) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(param_1 + 0x15d));
        }
        if (*(byte **)(param_1 + 0x161) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(param_1 + 0x161));
        }
        if (*(byte **)(param_1 + 0x165) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(param_1 + 0x165));
        }
        if (*(byte **)(param_1 + 0x169) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(param_1 + 0x169));
        }
        if (*(byte **)(param_1 + 0x16d) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(param_1 + 0x16d));
        }
        *(undefined4 *)(param_1 + 0x15d) = 0;
        *(undefined4 *)(param_1 + 0x161) = 0;
        *(undefined4 *)(param_1 + 0x165) = 0;
        *(undefined4 *)(param_1 + 0x169) = 0;
        *(undefined4 *)(param_1 + 0x16d) = 0;
        FUN_006ab060((undefined4 *)(param_1 + 0x195));
        FUN_006ab060((undefined4 *)(param_1 + 0x199));
        FUN_006ab060((undefined4 *)(param_1 + 0x1ad));
        FUN_006ab060((undefined4 *)(param_1 + 0x1b1));
        FUN_006ab060((undefined4 *)(param_1 + 0x1bd));
        FUN_006ab060((undefined4 *)(param_1 + 0x1c1));
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
      if (*(byte **)(param_1 + 0x135) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x135));
      }
      if (*(byte **)(param_1 + 0x139) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x139));
      }
      *(undefined4 *)(param_1 + 0x135) = 0;
      *(undefined4 *)(param_1 + 0x139) = 0;
      if (*(byte **)(param_1 + 0x12d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x12d));
      }
      if (*(byte **)(param_1 + 0x131) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x131));
      }
      *(undefined4 *)(param_1 + 0x12d) = 0;
      *(undefined4 *)(param_1 + 0x131) = 0;
      if (*(byte **)(param_1 + 0x14d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x14d));
      }
      if (*(byte **)(param_1 + 0x151) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x151));
      }
      if (*(byte **)(param_1 + 0x155) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x155));
      }
      if (*(byte **)(param_1 + 0x159) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x159));
      }
      *(undefined4 *)(param_1 + 0x14d) = 0;
      *(undefined4 *)(param_1 + 0x151) = 0;
      *(undefined4 *)(param_1 + 0x155) = 0;
      *(undefined4 *)(param_1 + 0x159) = 0;
      if (*(byte **)(param_1 + 0x13d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x13d));
      }
      if (*(byte **)(param_1 + 0x141) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x141));
      }
      if (*(byte **)(param_1 + 0x145) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x145));
      }
      if (*(byte **)(param_1 + 0x149) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x149));
      }
      *(undefined4 *)(param_1 + 0x13d) = 0;
      *(undefined4 *)(param_1 + 0x141) = 0;
      *(undefined4 *)(param_1 + 0x145) = 0;
      *(undefined4 *)(param_1 + 0x149) = 0;
      FUN_006ab060((undefined4 *)(param_1 + 0x185));
      FUN_006ab060((undefined4 *)(param_1 + 0x189));
      FUN_006ab060((undefined4 *)(param_1 + 0x18d));
      FUN_006ab060((undefined4 *)(param_1 + 0x191));
      if (*(byte **)(param_1 + 0x1a1) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x1a1));
        *(undefined4 *)(param_1 + 0x1a1) = 0;
      }
      if (*(byte **)(param_1 + 0x19d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(param_1 + 0x19d));
        *(undefined4 *)(param_1 + 0x19d) = 0;
      }
      FUN_006ab060((undefined4 *)(param_1 + 0x1a5));
      FUN_006ab060((undefined4 *)(param_1 + 0x1a9));
      FUN_006ab060((undefined4 *)(param_1 + 0x1b5));
      FUN_006ab060((undefined4 *)(param_1 + 0x1b9));
      return;
    }
    if (uVar1 == 0x3e9) {
      return;
    }
  }
  iVar3 = FUN_006ad4d0(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x5f5,0,0,&DAT_007a4ccc);
  if (iVar3 == 0) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

