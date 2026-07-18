
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::ChangeActivity */

void __thiscall STBoatC::ChangeActivity(STBoatC *this,int param_1)

{
  code *pcVar1;
  STBoatC *this_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  undefined4 uVar4;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  STBoatC *local_8;
  
  if (*(int *)(this + 0x455) != 1) {
    local_4c = DAT_00858df8;
    DAT_00858df8 = &local_4c;
    local_8 = this;
    iVar2 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
    this_00 = local_8;
    if (iVar2 == 0) {
      if ((param_1 == 1) && (*(uint *)(local_8 + 0x24) == (uint)DAT_0080874d)) {
        switch(*(undefined4 *)(local_8 + 0x6f7)) {
        case 1:
          uVar4 = 0xc9;
          break;
        case 2:
          uVar4 = 0xcf;
          break;
        case 3:
          uVar4 = 0xd5;
          break;
        case 4:
          uVar4 = 0xdb;
          break;
        case 5:
          uVar4 = 0xe1;
          break;
        case 6:
          uVar4 = 0xe8;
          break;
        case 7:
          uVar4 = 0xef;
          break;
        case 8:
          uVar4 = 0xf6;
          break;
        case 9:
          uVar4 = 0xfe;
          break;
        case 10:
          uVar4 = 0x103;
          break;
        case 0xb:
          uVar4 = 0x109;
          break;
        case 0xc:
          uVar4 = 0x10f;
          break;
        case 0xd:
          uVar4 = 0x12d;
          break;
        case 0xe:
          uVar4 = 0x133;
          break;
        case 0xf:
          uVar4 = 0x139;
          break;
        case 0x10:
          uVar4 = 0x13f;
          break;
        case 0x11:
          uVar4 = 0x145;
          break;
        case 0x12:
          uVar4 = 0x14c;
          break;
        case 0x13:
          uVar4 = 0x153;
          break;
        case 0x14:
          uVar4 = 0x15a;
          break;
        case 0x15:
          uVar4 = 0x162;
          break;
        case 0x16:
          uVar4 = 0x167;
          break;
        case 0x17:
          uVar4 = 0x16f;
          break;
        case 0x18:
          uVar4 = 0x175;
          break;
        case 0x19:
          uVar4 = 0x191;
          break;
        case 0x1a:
          uVar4 = 0x199;
          break;
        case 0x1b:
          uVar4 = 0x1a1;
          break;
        case 0x1c:
          uVar4 = 0x1a7;
          break;
        case 0x1d:
          uVar4 = 0x1ad;
          break;
        case 0x1e:
          uVar4 = 0x1b4;
          break;
        case 0x1f:
          uVar4 = 0x1ba;
          break;
        case 0x20:
          uVar4 = 0x1c0;
          break;
        case 0x21:
          uVar4 = 0x1c6;
          break;
        case 0x22:
          uVar4 = 0x1cd;
          break;
        case 0x23:
          uVar4 = 0x1d4;
          break;
        case 0x24:
          uVar4 = 0x1da;
          break;
        case 0x25:
          uVar4 = 0x17b;
          break;
        case 0x26:
          uVar4 = 0x115;
          break;
        case 0x27:
          uVar4 = 0x181;
          break;
        case 0x28:
          uVar4 = 0x1e0;
          break;
        default:
          uVar4 = 0;
        }
        iVar2 = thunk_FUN_00493cd0((int)local_8);
        if (iVar2 == 0) {
          (**(code **)(*(int *)this_00 + 0x90))(4,uVar4);
        }
      }
      thunk_FUN_0041dd00(this_00,param_1);
      DAT_00858df8 = (undefined4 *)local_4c;
      return;
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar3 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x3dc3,0,-1,&DAT_007a4ccc);
    if (iVar3 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_006a5e40(iVar2,0,0x7a9d3c,0x3dc4);
  }
  return;
}

