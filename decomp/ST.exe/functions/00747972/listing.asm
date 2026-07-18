FUN_00747972:
00747972  57                        PUSH EDI
00747973  8B 7C 24 0C               MOV EDI,dword ptr [ESP + 0xc]
00747977  85 FF                     TEST EDI,EDI
00747979  75 07                     JNZ 0x00747982
0074797B  B8 03 40 00 80            MOV EAX,0x80004003
00747980  EB 47                     JMP 0x007479c9
LAB_00747982:
00747982  56                        PUSH ESI
00747983  8B 74 24 0C               MOV ESI,dword ptr [ESP + 0xc]
00747987  53                        PUSH EBX
00747988  8B CE                     MOV ECX,ESI
0074798A  33 DB                     XOR EBX,EBX
0074798C  E8 AA 05 00 00            CALL 0x00747f3b
00747991  83 F8 01                  CMP EAX,0x1
00747994  75 09                     JNZ 0x0074799f
00747996  21 1F                     AND dword ptr [EDI],EBX
00747998  BB 03 02 04 80            MOV EBX,0x80040203
0074799D  EB 26                     JMP 0x007479c5
LAB_0074799f:
0074799F  6A 14                     PUSH 0x14
007479A1  E8 8A 6B FE FF            CALL 0x0072e530
007479A6  85 C0                     TEST EAX,EAX
007479A8  59                        POP ECX
007479A9  74 0D                     JZ 0x007479b8
007479AB  56                        PUSH ESI
007479AC  8B C8                     MOV ECX,EAX
007479AE  FF 76 08                  PUSH dword ptr [ESI + 0x8]
007479B1  E8 BE FE FF FF            CALL 0x00747874
007479B6  EB 02                     JMP 0x007479ba
LAB_007479b8:
007479B8  33 C0                     XOR EAX,EAX
LAB_007479ba:
007479BA  85 C0                     TEST EAX,EAX
007479BC  89 07                     MOV dword ptr [EDI],EAX
007479BE  75 05                     JNZ 0x007479c5
007479C0  BB 0E 00 07 80            MOV EBX,0x8007000e
LAB_007479c5:
007479C5  8B C3                     MOV EAX,EBX
007479C7  5B                        POP EBX
007479C8  5E                        POP ESI
LAB_007479c9:
007479C9  5F                        POP EDI
007479CA  C2 08 00                  RET 0x8
