FUN_00756a10:
00756A10  55                        PUSH EBP
00756A11  8B EC                     MOV EBP,ESP
00756A13  56                        PUSH ESI
00756A14  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00756A17  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00756A1A  3D CF 00 00 00            CMP EAX,0xcf
00756A1F  74 1E                     JZ 0x00756a3f
00756A21  3D CC 00 00 00            CMP EAX,0xcc
00756A26  74 17                     JZ 0x00756a3f
00756A28  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00756A2D  68 EA 00 00 00            PUSH 0xea
00756A32  68 50 2D 7F 00            PUSH 0x7f2d50
00756A37  50                        PUSH EAX
00756A38  6A 12                     PUSH 0x12
00756A3A  E8 01 F4 F4 FF            CALL 0x006a5e40
LAB_00756a3f:
00756A3F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00756A42  85 C0                     TEST EAX,EAX
00756A44  7F 05                     JG 0x00756a4b
00756A46  B8 01 00 00 00            MOV EAX,0x1
LAB_00756a4b:
00756A4B  8B 8E A2 01 00 00         MOV ECX,dword ptr [ESI + 0x1a2]
00756A51  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
00756A54  85 D2                     TEST EDX,EDX
00756A56  74 0C                     JZ 0x00756a64
00756A58  8B 8E 88 00 00 00         MOV ECX,dword ptr [ESI + 0x88]
00756A5E  3B C1                     CMP EAX,ECX
00756A60  7E 02                     JLE 0x00756a64
00756A62  8B C1                     MOV EAX,ECX
LAB_00756a64:
00756A64  56                        PUSH ESI
00756A65  89 86 90 00 00 00         MOV dword ptr [ESI + 0x90],EAX
00756A6B  E8 90 FD FF FF            CALL 0x00756800
00756A70  5E                        POP ESI
00756A71  5D                        POP EBP
00756A72  C2 08 00                  RET 0x8
