FUN_00566ff0:
00566FF0  56                        PUSH ESI
00566FF1  8B F1                     MOV ESI,ECX
00566FF3  E8 F8 23 1B 00            CALL 0x007193f0
00566FF8  A1 00 73 80 00            MOV EAX,[0x00807300]
00566FFD  25 FF 00 00 00            AND EAX,0xff
00567002  83 E8 02                  SUB EAX,0x2
00567005  74 15                     JZ 0x0056701c
00567007  83 E8 02                  SUB EAX,0x2
0056700A  74 05                     JZ 0x00567011
0056700C  83 E8 04                  SUB EAX,0x4
0056700F  75 2A                     JNZ 0x0056703b
LAB_00567011:
00567011  6A 0B                     PUSH 0xb
00567013  8B CE                     MOV ECX,ESI
00567015  E8 C0 AC E9 FF            CALL 0x00401cda
0056701A  5E                        POP ESI
0056701B  C3                        RET
LAB_0056701c:
0056701C  8B 86 8F 0F 00 00         MOV EAX,dword ptr [ESI + 0xf8f]
00567022  81 C6 8F 0F 00 00         ADD ESI,0xf8f
00567028  85 C0                     TEST EAX,EAX
0056702A  74 0F                     JZ 0x0056703b
0056702C  56                        PUSH ESI
0056702D  E8 2E 25 1B 00            CALL 0x00719560
00567032  56                        PUSH ESI
00567033  E8 28 2C 1B 00            CALL 0x00719c60
00567038  83 C4 08                  ADD ESP,0x8
LAB_0056703b:
0056703B  5E                        POP ESI
0056703C  C3                        RET
