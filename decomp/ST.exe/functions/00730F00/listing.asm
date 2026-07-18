__CrtSetReportFile:
00730F00  55                        PUSH EBP
00730F01  8B EC                     MOV EBP,ESP
00730F03  51                        PUSH ECX
00730F04  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00730F08  7C 06                     JL 0x00730f10
00730F0A  83 7D 08 03               CMP dword ptr [EBP + 0x8],0x3
00730F0E  7C 07                     JL 0x00730f17
LAB_00730f10:
00730F10  B8 FE FF FF FF            MOV EAX,0xfffffffe
00730F15  EB 63                     JMP 0x00730f7a
LAB_00730f17:
00730F17  83 7D 0C FA               CMP dword ptr [EBP + 0xc],-0x6
00730F1B  75 0C                     JNZ 0x00730f29
00730F1D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730F20  8B 04 85 AC 14 7F 00      MOV EAX,dword ptr [EAX*0x4 + 0x7f14ac]
00730F27  EB 51                     JMP 0x00730f7a
LAB_00730f29:
00730F29  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730F2C  8B 14 8D AC 14 7F 00      MOV EDX,dword ptr [ECX*0x4 + 0x7f14ac]
00730F33  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00730F36  83 7D 0C FC               CMP dword ptr [EBP + 0xc],-0x4
00730F3A  75 14                     JNZ 0x00730f50
00730F3C  6A F5                     PUSH -0xb
00730F3E  FF 15 B4 BC 85 00         CALL dword ptr [0x0085bcb4]
00730F44  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730F47  89 04 8D AC 14 7F 00      MOV dword ptr [ECX*0x4 + 0x7f14ac],EAX
00730F4E  EB 27                     JMP 0x00730f77
LAB_00730f50:
00730F50  83 7D 0C FB               CMP dword ptr [EBP + 0xc],-0x5
00730F54  75 14                     JNZ 0x00730f6a
00730F56  6A F4                     PUSH -0xc
00730F58  FF 15 B4 BC 85 00         CALL dword ptr [0x0085bcb4]
00730F5E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00730F61  89 04 95 AC 14 7F 00      MOV dword ptr [EDX*0x4 + 0x7f14ac],EAX
00730F68  EB 0D                     JMP 0x00730f77
LAB_00730f6a:
00730F6A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730F6D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00730F70  89 0C 85 AC 14 7F 00      MOV dword ptr [EAX*0x4 + 0x7f14ac],ECX
LAB_00730f77:
00730F77  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00730f7a:
00730F7A  8B E5                     MOV ESP,EBP
00730F7C  5D                        POP EBP
00730F7D  C3                        RET
