FUN_0074dee5:
0074DEE5  56                        PUSH ESI
0074DEE6  57                        PUSH EDI
0074DEE7  8B F9                     MOV EDI,ECX
0074DEE9  E8 C9 FF FF FF            CALL 0x0074deb7
0074DEEE  8B F0                     MOV ESI,EAX
LAB_0074def0:
0074DEF0  85 F6                     TEST ESI,ESI
0074DEF2  74 1F                     JZ 0x0074df13
0074DEF4  56                        PUSH ESI
0074DEF5  8B CF                     MOV ECX,EDI
0074DEF7  E8 DB FF FF FF            CALL 0x0074ded7
0074DEFC  3B 44 24 0C               CMP EAX,dword ptr [ESP + 0xc]
0074DF00  74 0D                     JZ 0x0074df0f
0074DF02  85 F6                     TEST ESI,ESI
0074DF04  75 04                     JNZ 0x0074df0a
0074DF06  8B 37                     MOV ESI,dword ptr [EDI]
0074DF08  EB E6                     JMP 0x0074def0
LAB_0074df0a:
0074DF0A  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
0074DF0D  EB E1                     JMP 0x0074def0
LAB_0074df0f:
0074DF0F  8B C6                     MOV EAX,ESI
0074DF11  EB 02                     JMP 0x0074df15
LAB_0074df13:
0074DF13  33 C0                     XOR EAX,EAX
LAB_0074df15:
0074DF15  5F                        POP EDI
0074DF16  5E                        POP ESI
0074DF17  C2 04 00                  RET 0x4
