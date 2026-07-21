
void __thiscall FUN_00621780(void *this,uint param_1)

{
  char *text;
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  SoundPosition local_10;

  iVar1 = *(int *)((int)this + 0x10a);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((param_1 < *(uint *)(iVar1 + 0xc)) &&
     (puVar2 = (undefined1 *)(*(int *)(iVar1 + 8) * param_1 + *(int *)(iVar1 + 0x1c)),
     puVar2 != (undefined1 *)0x0)) {
    switch(*(undefined4 *)(puVar2 + 9)) {
    case 1:
      if (DAT_0080874e == '\x01') {
        iVar1 = 0x3e;
      }
      else if (DAT_0080874e == '\x02') {
        iVar1 = 0x3f;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar1 = 0x40;
      }
      break;
    case 2:
      if (DAT_0080874e == '\x01') {
        iVar1 = 0x41;
      }
      else if (DAT_0080874e == '\x02') {
        iVar1 = 0x42;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar1 = 0x43;
      }
      break;
    case 3:
      if (DAT_0080874e == '\x01') {
        iVar1 = 0x44;
      }
      else if (DAT_0080874e == '\x02') {
        iVar1 = 0x45;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar1 = 0x46;
      }
      break;
    case 4:
      if (DAT_0080874e == '\x01') {
        iVar1 = 0x47;
      }
      else if (DAT_0080874e == '\x02') {
        iVar1 = 0x48;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar1 = 0x49;
      }
      break;
    case 5:
      if (DAT_0080874e == '\x01') {
        iVar1 = 0x4a;
      }
      else if (DAT_0080874e == '\x02') {
        iVar1 = 0x4b;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar1 = 0x4c;
      }
      break;
    case 6:
      if (DAT_0080874e == '\x01') {
        iVar1 = 0x4d;
      }
      else if (DAT_0080874e == '\x02') {
        iVar1 = 0x4e;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar1 = 0x4f;
      }
      break;
    case 7:
      if (DAT_0080874e == '\x01') {
        iVar1 = 0x50;
      }
      else if (DAT_0080874e == '\x02') {
        iVar1 = 0x51;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar1 = 0x52;
      }
      break;
    case 8:
      uVar3 = 8;
      text = LoadResourceString(0x274a,HINSTANCE_00807618);
      thunk_FUN_0052d320(g_popUp_008016D8,text,uVar3);
      if (DAT_0080874e == '\x01') {
        iVar1 = 0xba;
      }
      else if (DAT_0080874e == '\x02') {
        iVar1 = 0xbb;
      }
      else {
        if (DAT_0080874e != '\x03') {
          return;
        }
        iVar1 = 0xbc;
      }
      break;
    default:
      goto switchD_006217ba_default;
    }
    local_10.unknown = 0;
    local_10.x = -1;
    local_10.y = -1;
    SoundClassTy::PlaySound_thunk
              ((SoundClassTy *)&g_sound,SOUND_MODE_6,(char *)0x0,iVar1,&local_10,0);
    *puVar2 = 1;
    *(uint *)(puVar2 + 1) = PTR_00802a38->field_00E4;
    *(uint *)((int)this + 0x106) = PTR_00802a38->field_00E4;
  }
switchD_006217ba_default:
  return;
}

