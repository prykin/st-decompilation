FUN_0057a140:
0057A140  55                        PUSH EBP
0057A141  8B EC                     MOV EBP,ESP
0057A143  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0057A146  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0057A149  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0057A14C  53                        PUSH EBX
0057A14D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0057A150  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
0057A156  56                        PUSH ESI
0057A157  57                        PUSH EDI
0057A158  C6 03 00                  MOV byte ptr [EBX],0x0
0057A15B  C6 00 1D                  MOV byte ptr [EAX],0x1d
0057A15E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0057A161  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0057A167  83 F8 0E                  CMP EAX,0xe
0057A16A  74 09                     JZ 0x0057a175
0057A16C  83 F8 0C                  CMP EAX,0xc
0057A16F  0F 85 86 00 00 00         JNZ 0x0057a1fb
LAB_0057a175:
0057A175  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057A178  8D B0 1A FF FF FF         LEA ESI,[EAX + 0xffffff1a]
0057A17E  83 FE 15                  CMP ESI,0x15
0057A181  77 78                     JA 0x0057a1fb
0057A183  33 C9                     XOR ECX,ECX
0057A185  8A 8E 2C A2 57 00         MOV CL,byte ptr [ESI + 0x57a22c]
switchD_0057a18b::switchD:
0057A18B  FF 24 8D 00 A2 57 00      JMP dword ptr [ECX*0x4 + 0x57a200]
switchD_0057a18b::caseD_e6:
0057A192  BF 70 AE 7C 00            MOV EDI,0x7cae70
0057A197  EB 3D                     JMP 0x0057a1d6
switchD_0057a18b::caseD_e7:
0057A199  BF 68 AE 7C 00            MOV EDI,0x7cae68
0057A19E  EB 36                     JMP 0x0057a1d6
switchD_0057a18b::caseD_e8:
0057A1A0  BF 60 AE 7C 00            MOV EDI,0x7cae60
0057A1A5  EB 2F                     JMP 0x0057a1d6
switchD_0057a18b::caseD_e9:
0057A1A7  BF 54 AE 7C 00            MOV EDI,0x7cae54
0057A1AC  EB 28                     JMP 0x0057a1d6
switchD_0057a18b::caseD_ea:
0057A1AE  BF 4C AE 7C 00            MOV EDI,0x7cae4c
0057A1B3  EB 21                     JMP 0x0057a1d6
switchD_0057a18b::caseD_eb:
0057A1B5  BF 44 AE 7C 00            MOV EDI,0x7cae44
0057A1BA  EB 1A                     JMP 0x0057a1d6
switchD_0057a18b::caseD_f2:
0057A1BC  BF 3C AE 7C 00            MOV EDI,0x7cae3c
0057A1C1  EB 13                     JMP 0x0057a1d6
switchD_0057a18b::caseD_f8:
0057A1C3  BF 30 AE 7C 00            MOV EDI,0x7cae30
0057A1C8  EB 0C                     JMP 0x0057a1d6
switchD_0057a18b::caseD_f6:
0057A1CA  BF 24 AE 7C 00            MOV EDI,0x7cae24
0057A1CF  EB 05                     JMP 0x0057a1d6
switchD_0057a18b::caseD_fa:
0057A1D1  BF 18 AE 7C 00            MOV EDI,0x7cae18
LAB_0057a1d6:
0057A1D6  83 C9 FF                  OR ECX,0xffffffff
0057A1D9  33 C0                     XOR EAX,EAX
0057A1DB  F2 AE                     SCASB.REPNE ES:EDI
0057A1DD  F7 D1                     NOT ECX
0057A1DF  2B F9                     SUB EDI,ECX
0057A1E1  8B C1                     MOV EAX,ECX
0057A1E3  8B F7                     MOV ESI,EDI
0057A1E5  8B FB                     MOV EDI,EBX
0057A1E7  C1 E9 02                  SHR ECX,0x2
0057A1EA  F3 A5                     MOVSD.REP ES:EDI,ESI
0057A1EC  8B C8                     MOV ECX,EAX
0057A1EE  83 E1 03                  AND ECX,0x3
0057A1F1  F3 A4                     MOVSB.REP ES:EDI,ESI
0057A1F3  8B 0D 6C 67 80 00         MOV ECX,dword ptr [0x0080676c]
0057A1F9  89 0A                     MOV dword ptr [EDX],ECX
switchD_0057a18b::caseD_ec:
0057A1FB  5F                        POP EDI
0057A1FC  5E                        POP ESI
0057A1FD  5B                        POP EBX
0057A1FE  5D                        POP EBP
0057A1FF  C3                        RET
