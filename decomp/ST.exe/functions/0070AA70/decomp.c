
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005123A0 -> 0070AA70 @ 00512552 | 005123A0 -> 0070AA70 @ 005125F0 | 00512830 ->
   0070AA70 @ 00512930 | 00512830 -> 0070AA70 @ 005129C3 | 00512BE0 -> 0070AA70 @ 00512D78 |
   00512BE0 -> 0070AA70 @ 00512DFD | 0052FB00 -> 0070AA70 @ 005315F3 | 0052FB00 -> 0070AA70 @
   005316B9 | 0052FB00 -> 0070AA70 @ 00531A79 | 0052FB00 -> 0070AA70 @ 00531B20 | 005424A0 ->
   0070AA70 @ 0054289E | 005C6030 -> 0070AA70 @ 005C60D8
   
   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005C6030 -> 0070AA70 @ 005C60D8 */

void __cdecl FUN_0070aa70(cMf32 *param_1,char *text,byte param_3,int param_4)

{
  Library::Ourlib::MFIMG::mfImgLoad(param_1,0x12,text,param_3,param_4);
  return;
}

