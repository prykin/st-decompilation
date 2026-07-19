
void __thiscall STGameObjC::SetSelfCheckFlag(STGameObjC *this,int *param_1)

{
  STGameObjC *pSVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(this + 0x1cd) == 1) {
    return;
  }
  if (*(int *)(this + 0x1cd) == 0) {
    *(undefined4 *)(this + 0x1cd) = 1;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x36);
    *(int *)(this + 0x11d) = iVar4;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x36);
    *(int *)(this + 0x121) = iVar4;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x5c);
    *(int *)(this + 0x125) = iVar4;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x5c);
    *(int *)(this + 0x129) = iVar4;
    uVar2 = *(uint *)(this + 0x20);
    if (uVar2 < 0x1af) {
      if (uVar2 == 0x1ae) {
        iVar4 = Library::DKW::LIB::FUN_006aac70(0xb);
        *(int *)(this + 0x1ad) = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0xb);
        *(int *)(this + 0x1b1) = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(6);
        *(int *)(this + 0x1c5) = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(6);
        *(int *)(this + 0x1c9) = iVar4;
      }
      else if (uVar2 < 0x173) {
        if (uVar2 != 0x172) {
          if (uVar2 == 0x14) {
            *(undefined4 *)(this + 0x15d) = 0;
            *(undefined4 *)(this + 0x161) = 0;
            *(undefined4 *)(this + 0x165) = 0;
            *(undefined4 *)(this + 0x169) = 0;
            *(undefined4 *)(this + 0x16d) = 0;
            *(undefined4 *)(this + 0x171) = 0;
            *(undefined4 *)(this + 0x175) = 0;
            *(undefined4 *)(this + 0x179) = 0;
            *(undefined4 *)(this + 0x17d) = 0;
            *(undefined4 *)(this + 0x181) = 0;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0x13);
            *(int *)(this + 0x195) = iVar4;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0x13);
            *(int *)(this + 0x199) = iVar4;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0xb);
            *(int *)(this + 0x1ad) = iVar4;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0xb);
            *(int *)(this + 0x1b1) = iVar4;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0x240);
            *(int *)(this + 0x1bd) = iVar4;
            iVar4 = Library::DKW::LIB::FUN_006aac70(0x240);
            *(int *)(this + 0x1c1) = iVar4;
          }
          else if (uVar2 != 0x5a) goto LAB_00419f6c;
        }
      }
      else if (uVar2 != 0x1a4) {
LAB_00419f6c:
        iVar4 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x54d,0,0,&DAT_007a4ccc,
                                   s_STGameObjC__SetSelfCheckFlag_unk_007a4e58);
        if (iVar4 == 0) {
          return;
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (uVar2 != 0x1b8) {
      if (uVar2 == 1000) {
        *(undefined4 *)(this + 0x12d) = 0;
        *(undefined4 *)(this + 0x131) = 0;
        *(undefined4 *)(this + 0x135) = 0;
        *(undefined4 *)(this + 0x139) = 0;
        *(undefined4 *)(this + 0x13d) = 0;
        *(undefined4 *)(this + 0x141) = 0;
        *(undefined4 *)(this + 0x145) = 0;
        *(undefined4 *)(this + 0x149) = 0;
        *(undefined4 *)(this + 0x14d) = 0;
        *(undefined4 *)(this + 0x151) = 0;
        *(undefined4 *)(this + 0x155) = 0;
        *(undefined4 *)(this + 0x159) = 0;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0x129);
        *(int *)(this + 0x185) = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0x129);
        *(int *)(this + 0x189) = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0x10);
        *(int *)(this + 0x18d) = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0x10);
        *(int *)(this + 0x191) = iVar4;
        *(undefined4 *)(this + 0x19d) = 0;
        *(undefined4 *)(this + 0x1a1) = 0;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0xc);
        *(int *)(this + 0x1a5) = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0xc);
        *(int *)(this + 0x1a9) = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0xb);
        *(int *)(this + 0x1b5) = iVar4;
        iVar4 = Library::DKW::LIB::FUN_006aac70(0xb);
        *(int *)(this + 0x1b9) = iVar4;
      }
      else if (uVar2 != 0x3e9) goto LAB_00419f6c;
    }
  }
  (**(code **)(*(int *)this + 0x30))(*(undefined4 *)(this + 0x121));
  puVar5 = *(undefined4 **)(this + 0x121);
  puVar6 = *(undefined4 **)(this + 0x11d);
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
  (**(code **)(*(int *)this + 0x34))(*(undefined4 *)(this + 0x129));
  puVar5 = *(undefined4 **)(this + 0x129);
  puVar6 = *(undefined4 **)(this + 0x125);
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar2 = *(uint *)(this + 0x20);
  if (uVar2 < 0x1af) {
    if (uVar2 == 0x1ae) {
      (**(code **)(*(int *)this + 0x58))(*(undefined4 *)(this + 0x1b1));
      puVar5 = *(undefined4 **)(this + 0x1b1);
      puVar6 = *(undefined4 **)(this + 0x1ad);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar5 + 2);
      *(undefined1 *)((int)puVar6 + 10) = *(undefined1 *)((int)puVar5 + 10);
      (**(code **)(*(int *)this + 100))(*(undefined4 *)(this + 0x1c9));
      puVar5 = *(undefined4 **)(this + 0x1c9);
      puVar6 = *(undefined4 **)(this + 0x1c5);
      *puVar6 = *puVar5;
      *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar5 + 1);
      return;
    }
    if (uVar2 < 0x173) {
      if (uVar2 == 0x172) {
        return;
      }
      if (uVar2 == 0x14) {
        pSVar1 = this + 0x171;
        if (*(byte **)(this + 0x171) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(this + 0x171));
        }
        if (*(byte **)(this + 0x175) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(this + 0x175));
        }
        if (*(byte **)(this + 0x179) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(this + 0x179));
        }
        if (*(byte **)(this + 0x17d) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(this + 0x17d));
        }
        if (*(byte **)(this + 0x181) != (byte *)0x0) {
          FUN_006ae110(*(byte **)(this + 0x181));
        }
        *(undefined4 *)pSVar1 = 0;
        *(undefined4 *)(this + 0x175) = 0;
        *(undefined4 *)(this + 0x179) = 0;
        *(undefined4 *)(this + 0x17d) = 0;
        *(undefined4 *)(this + 0x181) = 0;
        (**(code **)(*(int *)this + 0x40))(pSVar1);
        Library::DKW::TBL::FUN_006afe40((int *)(this + 0x15d),*(uint **)pSVar1);
        Library::DKW::TBL::FUN_006afe40((int *)(this + 0x161),*(uint **)(this + 0x175));
        Library::DKW::TBL::FUN_006afe40((int *)(this + 0x165),*(uint **)(this + 0x179));
        Library::DKW::TBL::FUN_006afe40((int *)(this + 0x169),*(uint **)(this + 0x17d));
        Library::DKW::TBL::FUN_006afe40((int *)(this + 0x16d),*(uint **)(this + 0x181));
        (**(code **)(*(int *)this + 0x4c))(*(undefined4 *)(this + 0x199));
        puVar5 = *(undefined4 **)(this + 0x199);
        puVar6 = *(undefined4 **)(this + 0x195);
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        puVar6[2] = puVar5[2];
        puVar6[3] = puVar5[3];
        *(undefined2 *)(puVar6 + 4) = *(undefined2 *)(puVar5 + 4);
        *(undefined1 *)((int)puVar6 + 0x12) = *(undefined1 *)((int)puVar5 + 0x12);
        (**(code **)(*(int *)this + 0x58))(*(undefined4 *)(this + 0x1b1));
        puVar5 = *(undefined4 **)(this + 0x1b1);
        puVar6 = *(undefined4 **)(this + 0x1ad);
        *puVar6 = *puVar5;
        puVar6[1] = puVar5[1];
        *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar5 + 2);
        *(undefined1 *)((int)puVar6 + 10) = *(undefined1 *)((int)puVar5 + 10);
        (**(code **)(*(int *)this + 0x60))(*(undefined4 *)(this + 0x1c1));
        puVar5 = *(undefined4 **)(this + 0x1c1);
        puVar6 = *(undefined4 **)(this + 0x1bd);
        for (iVar4 = 0x90; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        return;
      }
      if (uVar2 == 0x5a) {
        return;
      }
    }
    else if (uVar2 == 0x1a4) {
      return;
    }
  }
  else {
    if (uVar2 == 0x1b8) {
      return;
    }
    if (uVar2 == 1000) {
      pSVar1 = this + 0x135;
      if (*(byte **)(this + 0x135) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(this + 0x135));
      }
      if (*(byte **)(this + 0x139) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(this + 0x139));
      }
      *(undefined4 *)pSVar1 = 0;
      *(undefined4 *)(this + 0x139) = 0;
      (**(code **)(*(int *)this + 0x38))(pSVar1);
      Library::DKW::TBL::FUN_006afe40((int *)(this + 0x12d),*(uint **)pSVar1);
      Library::DKW::TBL::FUN_006afe40((int *)(this + 0x131),*(uint **)(this + 0x139));
      pSVar1 = this + 0x14d;
      if (*(byte **)(this + 0x14d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(this + 0x14d));
      }
      if (*(byte **)(this + 0x151) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(this + 0x151));
      }
      if (*(byte **)(this + 0x155) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(this + 0x155));
      }
      if (*(byte **)(this + 0x159) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(this + 0x159));
      }
      *(undefined4 *)pSVar1 = 0;
      *(undefined4 *)(this + 0x151) = 0;
      *(undefined4 *)(this + 0x155) = 0;
      *(undefined4 *)(this + 0x159) = 0;
      (**(code **)(*(int *)this + 0x3c))(pSVar1);
      Library::DKW::TBL::FUN_006afe40((int *)(this + 0x13d),*(uint **)pSVar1);
      Library::DKW::TBL::FUN_006afe40((int *)(this + 0x141),*(uint **)(this + 0x151));
      Library::DKW::TBL::FUN_006afe40((int *)(this + 0x145),*(uint **)(this + 0x155));
      Library::DKW::TBL::FUN_006afe40((int *)(this + 0x149),*(uint **)(this + 0x159));
      (**(code **)(*(int *)this + 0x44))(*(undefined4 *)(this + 0x189));
      puVar5 = *(undefined4 **)(this + 0x189);
      puVar6 = *(undefined4 **)(this + 0x185);
      for (iVar4 = 0x4a; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      (**(code **)(*(int *)this + 0x48))(*(undefined4 *)(this + 0x191));
      puVar5 = *(undefined4 **)(this + 0x191);
      puVar6 = *(undefined4 **)(this + 0x18d);
      pSVar1 = this + 0x1a1;
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      puVar6[3] = puVar5[3];
      if (*(byte **)pSVar1 != (byte *)0x0) {
        FUN_006ae110(*(byte **)pSVar1);
        *(undefined4 *)pSVar1 = 0;
      }
      if (*(byte **)(this + 0x19d) != (byte *)0x0) {
        FUN_006ae110(*(byte **)(this + 0x19d));
        *(int *)(this + 0x19d) = 0;
      }
      (**(code **)(*(int *)this + 0x50))(pSVar1);
      Library::DKW::TBL::FUN_006afe40((int *)(this + 0x19d),*(uint **)pSVar1);
      (**(code **)(*(int *)this + 0x54))(*(undefined4 *)(this + 0x1a9));
      puVar5 = *(undefined4 **)(this + 0x1a9);
      puVar6 = *(undefined4 **)(this + 0x1a5);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      (**(code **)(*(int *)this + 0x5c))(*(undefined4 *)(this + 0x1b9));
      puVar5 = *(undefined4 **)(this + 0x1b9);
      puVar6 = *(undefined4 **)(this + 0x1b5);
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      *(undefined2 *)(puVar6 + 2) = *(undefined2 *)(puVar5 + 2);
      *(undefined1 *)((int)puVar6 + 10) = *(undefined1 *)((int)puVar5 + 10);
      return;
    }
    if (uVar2 == 0x3e9) {
      return;
    }
  }
  iVar4 = ReportDebugMessage(s_E____titans_wlad_Tc_gobj_cpp_007a4e0c,0x5a5,0,0,&DAT_007a4ccc,
                             s_STGameObjC__SetSelfCheckFlag_unk_007a4e58);
  if (iVar4 == 0) {
    return;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

