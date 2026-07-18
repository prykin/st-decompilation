FUN_0075da80:
0075DA80  55                        PUSH EBP
0075DA81  8B EC                     MOV EBP,ESP
0075DA83  51                        PUSH ECX
0075DA84  53                        PUSH EBX
0075DA85  56                        PUSH ESI
0075DA86  57                        PUSH EDI
0075DA87  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075DA8A  68 00 04 00 00            PUSH 0x400
0075DA8F  6A 01                     PUSH 0x1
0075DA91  8B 07                     MOV EAX,dword ptr [EDI]
0075DA93  8B B7 B6 01 00 00         MOV ESI,dword ptr [EDI + 0x1b6]
0075DA99  57                        PUSH EDI
0075DA9A  FF 10                     CALL dword ptr [EAX]
0075DA9C  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
0075DA9F  8B 0F                     MOV ECX,dword ptr [EDI]
0075DAA1  68 00 04 00 00            PUSH 0x400
0075DAA6  6A 01                     PUSH 0x1
0075DAA8  57                        PUSH EDI
0075DAA9  FF 11                     CALL dword ptr [ECX]
0075DAAB  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0075DAAE  8B 17                     MOV EDX,dword ptr [EDI]
0075DAB0  68 00 04 00 00            PUSH 0x400
0075DAB5  6A 01                     PUSH 0x1
0075DAB7  57                        PUSH EDI
0075DAB8  FF 12                     CALL dword ptr [EDX]
0075DABA  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0075DABD  8B 07                     MOV EAX,dword ptr [EDI]
0075DABF  68 00 04 00 00            PUSH 0x400
0075DAC4  6A 01                     PUSH 0x1
0075DAC6  57                        PUSH EDI
0075DAC7  FF 10                     CALL dword ptr [EAX]
0075DAC9  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0075DACC  33 C0                     XOR EAX,EAX
0075DACE  C7 45 FC 00 69 5B 00      MOV dword ptr [EBP + -0x4],0x5b6900
0075DAD5  C7 45 08 00 AF 1D FF      MOV dword ptr [EBP + 0x8],0xff1daf00
0075DADC  BA 80 0B 4D FF            MOV EDX,0xff4d0b80
0075DAE1  B9 00 8D 2C 00            MOV ECX,0x2c8d00
LAB_0075dae6:
0075DAE6  8B 5E 08                  MOV EBX,dword ptr [ESI + 0x8]
0075DAE9  8B FA                     MOV EDI,EDX
0075DAEB  C1 FF 10                  SAR EDI,0x10
0075DAEE  89 3C 03                  MOV dword ptr [EBX + EAX*0x1],EDI
0075DAF1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075DAF4  8B 5E 0C                  MOV EBX,dword ptr [ESI + 0xc]
0075DAF7  81 C2 E9 66 01 00         ADD EDX,0x166e9
0075DAFD  C1 FF 10                  SAR EDI,0x10
0075DB00  89 3C 03                  MOV dword ptr [EBX + EAX*0x1],EDI
0075DB03  8B 5E 10                  MOV EBX,dword ptr [ESI + 0x10]
0075DB06  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0075DB09  89 3C 03                  MOV dword ptr [EBX + EAX*0x1],EDI
0075DB0C  8B 5E 14                  MOV EBX,dword ptr [ESI + 0x14]
0075DB0F  81 EF D2 B6 00 00         SUB EDI,0xb6d2
0075DB15  89 0C 03                  MOV dword ptr [EBX + EAX*0x1],ECX
0075DB18  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075DB1B  81 E9 1A 58 00 00         SUB ECX,0x581a
0075DB21  81 C3 A2 C5 01 00         ADD EBX,0x1c5a2
0075DB27  83 C0 04                  ADD EAX,0x4
0075DB2A  81 F9 1A CB D4 FF         CMP ECX,0xffd4cb1a
0075DB30  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0075DB33  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0075DB36  7D AE                     JGE 0x0075dae6
0075DB38  5F                        POP EDI
0075DB39  5E                        POP ESI
0075DB3A  5B                        POP EBX
0075DB3B  8B E5                     MOV ESP,EBP
0075DB3D  5D                        POP EBP
0075DB3E  C2 04 00                  RET 0x4
