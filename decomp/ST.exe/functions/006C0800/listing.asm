FUN_006c0800:
006C0800  55                        PUSH EBP
006C0801  8B EC                     MOV EBP,ESP
006C0803  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006C0806  53                        PUSH EBX
006C0807  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C080A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C080D  8D 1C 40                  LEA EBX,[EAX + EAX*0x2]
006C0810  56                        PUSH ESI
006C0811  C1 E3 04                  SHL EBX,0x4
006C0814  03 D8                     ADD EBX,EAX
006C0816  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C0819  C1 E3 02                  SHL EBX,0x2
006C081C  89 5D 30                  MOV dword ptr [EBP + 0x30],EBX
006C081F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C0822  8D 9B F8 4F 85 00         LEA EBX,[EBX + 0x854ff8]
006C0828  25 FF 00 00 00            AND EAX,0xff
006C082D  57                        PUSH EDI
006C082E  53                        PUSH EBX
006C082F  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
006C0832  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C0835  89 4B 30                  MOV dword ptr [EBX + 0x30],ECX
006C0838  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C083B  89 53 34                  MOV dword ptr [EBX + 0x34],EDX
006C083E  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C0841  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006C0844  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006C0847  89 4B 38                  MOV dword ptr [EBX + 0x38],ECX
006C084A  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006C084D  89 53 3C                  MOV dword ptr [EBX + 0x3c],EDX
006C0850  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C0853  89 73 24                  MOV dword ptr [EBX + 0x24],ESI
006C0856  89 43 40                  MOV dword ptr [EBX + 0x40],EAX
006C0859  89 4B 44                  MOV dword ptr [EBX + 0x44],ECX
006C085C  89 53 48                  MOV dword ptr [EBX + 0x48],EDX
006C085F  66 8B 0E                  MOV CX,word ptr [ESI]
006C0862  8D 7B 4C                  LEA EDI,[EBX + 0x4c]
006C0865  66 49                     DEC CX
006C0867  66 F7 D9                  NEG CX
006C086A  1B C9                     SBB ECX,ECX
006C086C  83 E1 24                  AND ECX,0x24
006C086F  83 C1 1A                  ADD ECX,0x1a
006C0872  8B C1                     MOV EAX,ECX
006C0874  C1 E9 02                  SHR ECX,0x2
006C0877  F3 A5                     MOVSD.REP ES:EDI,ESI
006C0879  8B C8                     MOV ECX,EAX
006C087B  83 E1 03                  AND ECX,0x3
006C087E  F3 A4                     MOVSB.REP ES:EDI,ESI
006C0880  E8 6B F3 FF FF            CALL 0x006bfbf0
006C0885  85 C0                     TEST EAX,EAX
006C0887  74 44                     JZ 0x006c08cd
006C0889  8B 75 30                  MOV ESI,dword ptr [EBP + 0x30]
006C088C  8B 86 04 50 85 00         MOV EAX,dword ptr [ESI + 0x855004]
006C0892  85 C0                     TEST EAX,EAX
006C0894  74 2C                     JZ 0x006c08c2
006C0896  8B 08                     MOV ECX,dword ptr [EAX]
006C0898  50                        PUSH EAX
006C0899  FF 51 48                  CALL dword ptr [ECX + 0x48]
006C089C  8B 86 08 50 85 00         MOV EAX,dword ptr [ESI + 0x855008]
006C08A2  85 C0                     TEST EAX,EAX
006C08A4  74 10                     JZ 0x006c08b6
006C08A6  8B 10                     MOV EDX,dword ptr [EAX]
006C08A8  50                        PUSH EAX
006C08A9  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C08AC  C7 86 08 50 85 00 00 00 00 00  MOV dword ptr [ESI + 0x855008],0x0
LAB_006c08b6:
006C08B6  8B B6 04 50 85 00         MOV ESI,dword ptr [ESI + 0x855004]
006C08BC  56                        PUSH ESI
006C08BD  8B 06                     MOV EAX,dword ptr [ESI]
006C08BF  FF 50 08                  CALL dword ptr [EAX + 0x8]
LAB_006c08c2:
006C08C2  B9 31 00 00 00            MOV ECX,0x31
006C08C7  33 C0                     XOR EAX,EAX
006C08C9  8B FB                     MOV EDI,EBX
006C08CB  F3 AB                     STOSD.REP ES:EDI
LAB_006c08cd:
006C08CD  5F                        POP EDI
006C08CE  5E                        POP ESI
006C08CF  5B                        POP EBX
006C08D0  5D                        POP EBP
006C08D1  C2 2C 00                  RET 0x2c
