FUN_00730e20:
00730E20  55                        PUSH EBP
00730E21  8B EC                     MOV EBP,ESP
00730E23  51                        PUSH ECX
00730E24  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730E27  3B 05 C8 14 7F 00         CMP EAX,dword ptr [0x007f14c8]
00730E2D  77 1A                     JA 0x00730e49
00730E2F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730E32  51                        PUSH ECX
00730E33  E8 38 13 00 00            CALL 0x00732170
00730E38  83 C4 04                  ADD ESP,0x4
00730E3B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00730E3E  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00730E42  74 05                     JZ 0x00730e49
00730E44  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00730E47  EB 2C                     JMP 0x00730e75
LAB_00730e49:
00730E49  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00730E4D  75 07                     JNZ 0x00730e56
00730E4F  C7 45 08 01 00 00 00      MOV dword ptr [EBP + 0x8],0x1
LAB_00730e56:
00730E56  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00730E59  83 C2 0F                  ADD EDX,0xf
00730E5C  83 E2 F0                  AND EDX,0xfffffff0
00730E5F  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00730E62  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730E65  50                        PUSH EAX
00730E66  6A 00                     PUSH 0x0
00730E68  8B 0D C4 A5 85 00         MOV ECX,dword ptr [0x0085a5c4]
00730E6E  51                        PUSH ECX
00730E6F  FF 15 A8 BC 85 00         CALL dword ptr [0x0085bca8]
LAB_00730e75:
00730E75  8B E5                     MOV ESP,EBP
00730E77  5D                        POP EBP
00730E78  C3                        RET
