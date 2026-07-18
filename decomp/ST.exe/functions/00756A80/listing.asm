FUN_00756a80:
00756A80  55                        PUSH EBP
00756A81  8B EC                     MOV EBP,ESP
00756A83  56                        PUSH ESI
00756A84  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00756A87  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
00756A8A  3D CD 00 00 00            CMP EAX,0xcd
00756A8F  74 07                     JZ 0x00756a98
00756A91  3D CE 00 00 00            CMP EAX,0xce
00756A96  75 1A                     JNZ 0x00756ab2
LAB_00756a98:
00756A98  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
00756A9B  85 C9                     TEST ECX,ECX
00756A9D  74 13                     JZ 0x00756ab2
00756A9F  8B 86 92 01 00 00         MOV EAX,dword ptr [ESI + 0x192]
00756AA5  56                        PUSH ESI
00756AA6  FF 50 04                  CALL dword ptr [EAX + 0x4]
00756AA9  C7 46 0C D0 00 00 00      MOV dword ptr [ESI + 0xc],0xd0
00756AB0  EB 1F                     JMP 0x00756ad1
LAB_00756ab2:
00756AB2  3D D0 00 00 00            CMP EAX,0xd0
00756AB7  74 18                     JZ 0x00756ad1
00756AB9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00756ABF  68 09 01 00 00            PUSH 0x109
00756AC4  68 50 2D 7F 00            PUSH 0x7f2d50
00756AC9  51                        PUSH ECX
00756ACA  6A 12                     PUSH 0x12
00756ACC  E8 6F F3 F4 FF            CALL 0x006a5e40
LAB_00756ad1:
00756AD1  8B 96 88 00 00 00         MOV EDX,dword ptr [ESI + 0x88]
00756AD7  8B 86 90 00 00 00         MOV EAX,dword ptr [ESI + 0x90]
00756ADD  3B D0                     CMP EDX,EAX
00756ADF  7F 24                     JG 0x00756b05
LAB_00756ae1:
00756AE1  8B 86 A2 01 00 00         MOV EAX,dword ptr [ESI + 0x1a2]
00756AE7  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00756AEA  85 C9                     TEST ECX,ECX
00756AEC  75 17                     JNZ 0x00756b05
00756AEE  56                        PUSH ESI
00756AEF  FF 10                     CALL dword ptr [EAX]
00756AF1  85 C0                     TEST EAX,EAX
00756AF3  74 21                     JZ 0x00756b16
00756AF5  8B 86 88 00 00 00         MOV EAX,dword ptr [ESI + 0x88]
00756AFB  8B 8E 90 00 00 00         MOV ECX,dword ptr [ESI + 0x90]
00756B01  3B C1                     CMP EAX,ECX
00756B03  7E DC                     JLE 0x00756ae1
LAB_00756b05:
00756B05  C7 46 0C CF 00 00 00      MOV dword ptr [ESI + 0xc],0xcf
00756B0C  B8 01 00 00 00            MOV EAX,0x1
00756B11  5E                        POP ESI
00756B12  5D                        POP EBP
00756B13  C2 04 00                  RET 0x4
LAB_00756b16:
00756B16  33 C0                     XOR EAX,EAX
00756B18  5E                        POP ESI
00756B19  5D                        POP EBP
00756B1A  C2 04 00                  RET 0x4
