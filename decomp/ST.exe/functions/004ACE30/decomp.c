
/* [STMethodOwnerApplier] Structural method owner recovered as STT3DSprC.
   Evidence: this_call_owners=[STT3DSprC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00480600 -> 004ACE30 @ 00480CA0;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 00480C94 establishes signed source width 2 | 004ACE30 -> 006E9350 @ 004ACE42 | 004B8C80 ->
   004ACE30 @ 004B9478; MOVSX at 004B9468 establishes signed source width 2 | 004B9FA0 -> 004ACE30 @
   004BA80A; /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c
   (entries); MOVSX at 004BA7FE establishes signed source width 2 | 004C9770 -> 004ACE30 @ 004C9D72;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 004C9D66 establishes signed source width 2 | 0057E0A0 -> 004ACE30 @ 0057EA79; MOVSX at
   0057EA64 establishes signed source width 2 | 0057E0A0 -> 004ACE30 @ 0057EAB2;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0057EA9F establishes signed source width 2 | 0057E0A0 -> 004ACE30 @ 0057EAFB;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0057EAF4 establishes signed source width 2 | 0057E0A0 -> 004ACE30 @ 0057EB32;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0057EB28 establishes signed source width 2 | 00585020 -> 004ACE30 @ 0058533D;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 00585331 establishes signed source width 2 | 00585020 -> 004ACE30 @ 0058558E;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 00585582 establishes signed source width 2 | 0058BD90 -> 004ACE30 @ 0058C0E5; MOVSX at
   0058C0D5 establishes signed source width 2 | 0058BD90 -> 004ACE30 @ 0058C1EC;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0058C1DC establishes signed source width 2 | 0058BD90 -> 004ACE30 @ 0058C296;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0058C28A establishes signed source width 2 | 0058E570 -> 004ACE30 @ 0058E60D;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0058E601 establishes signed source width 2 | 005F0BA0 -> 004ACE30 @ 005F0C4B;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005F0C42 establishes signed source width 2 | 005F6F60 -> 004ACE30 @ 005F70D1;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005F70C5 establishes signed source width 2 | 005F6F60 -> 004ACE30 @ 005F728A;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005F727E establishes signed source width 2 | 005F6F60 -> 004ACE30 @ 005F7335;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005F7329 establishes signed source width 2 | 005F6F60 -> 004ACE30 @ 005F7419;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005F740D establishes signed source width 2 | 005FA180 -> 004ACE30 @ 005FA1CB;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005FA1BF establishes signed source width 2 | 005FA180 -> 004ACE30 @ 005FA22D;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005FA224 establishes signed source width 2 | 005FA180 -> 004ACE30 @ 005FA24F;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 005FA243 establishes signed source width 2 | 0062F150 -> 004ACE30 @ 0062F261;
   /SubmarineTitans/Recovered/PointerShapes/AnonShape_GLOBAL_00806724_3210464F+0x2c (entries); MOVSX
   at 0062F250 establishes signed source width 2 */

void __thiscall STT3DSprC::sub_004ACE30(STT3DSprC *this,uint param_1,int entries)

{
  Library::Ourlib::ST3DSMAP::SprSetMask(this->field_003C,this->field_0018,param_1,entries);
  return;
}

