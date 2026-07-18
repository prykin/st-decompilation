FUN_00758df0:
00758DF0  55                        PUSH EBP
00758DF1  8B EC                     MOV EBP,ESP
00758DF3  83 EC 14                  SUB ESP,0x14
00758DF6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00758DF9  53                        PUSH EBX
00758DFA  56                        PUSH ESI
00758DFB  57                        PUSH EDI
00758DFC  8B 59 10                  MOV EBX,dword ptr [ECX + 0x10]
00758DFF  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
00758E02  8B 33                     MOV ESI,dword ptr [EBX]
00758E04  85 FF                     TEST EDI,EDI
00758E06  75 14                     JNZ 0x00758e1c
00758E08  51                        PUSH ECX
00758E09  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758E0C  85 C0                     TEST EAX,EAX
00758E0E  0F 84 7C 01 00 00         JZ 0x00758f90
00758E14  8B 33                     MOV ESI,dword ptr [EBX]
00758E16  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
00758E19  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_00758e1c:
00758E1C  33 C0                     XOR EAX,EAX
00758E1E  4F                        DEC EDI
00758E1F  8A 26                     MOV AH,byte ptr [ESI]
00758E21  46                        INC ESI
00758E22  85 FF                     TEST EDI,EDI
00758E24  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00758E27  75 17                     JNZ 0x00758e40
00758E29  51                        PUSH ECX
00758E2A  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758E2D  85 C0                     TEST EAX,EAX
00758E2F  0F 84 5B 01 00 00         JZ 0x00758f90
00758E35  8B 33                     MOV ESI,dword ptr [EBX]
00758E37  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
00758E3A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00758E3D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_00758e40:
00758E40  33 D2                     XOR EDX,EDX
00758E42  4F                        DEC EDI
00758E43  8A 16                     MOV DL,byte ptr [ESI]
00758E45  03 C2                     ADD EAX,EDX
00758E47  46                        INC ESI
00758E48  83 E8 02                  SUB EAX,0x2
00758E4B  85 C0                     TEST EAX,EAX
00758E4D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00758E50  0F 8E 27 01 00 00         JLE 0x00758f7d
00758E56  EB 03                     JMP 0x00758e5b
LAB_00758e58:
00758E58  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_00758e5b:
00758E5B  85 FF                     TEST EDI,EDI
00758E5D  75 14                     JNZ 0x00758e73
00758E5F  51                        PUSH ECX
00758E60  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758E63  85 C0                     TEST EAX,EAX
00758E65  0F 84 25 01 00 00         JZ 0x00758f90
00758E6B  8B 33                     MOV ESI,dword ptr [EBX]
00758E6D  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
00758E70  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_00758e73:
00758E73  33 C0                     XOR EAX,EAX
00758E75  4F                        DEC EDI
00758E76  8A 06                     MOV AL,byte ptr [ESI]
00758E78  46                        INC ESI
00758E79  8B D0                     MOV EDX,EAX
00758E7B  83 E0 0F                  AND EAX,0xf
00758E7E  C1 FA 04                  SAR EDX,0x4
00758E81  83 F8 04                  CMP EAX,0x4
00758E84  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00758E87  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00758E8A  7C 1D                     JL 0x00758ea9
00758E8C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00758E91  68 3B 02 00 00            PUSH 0x23b
00758E96  68 B0 2D 7F 00            PUSH 0x7f2db0
00758E9B  50                        PUSH EAX
00758E9C  6A 1E                     PUSH 0x1e
00758E9E  E8 9D CF F4 FF            CALL 0x006a5e40
00758EA3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00758EA6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_00758ea9:
00758EA9  8B 94 81 9C 00 00 00      MOV EDX,dword ptr [ECX + EAX*0x4 + 0x9c]
00758EB0  85 D2                     TEST EDX,EDX
00758EB2  75 15                     JNZ 0x00758ec9
00758EB4  51                        PUSH ECX
00758EB5  E8 76 0F 00 00            CALL 0x00759e30
00758EBA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00758EBD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00758EC0  89 84 91 9C 00 00 00      MOV dword ptr [ECX + EDX*0x4 + 0x9c],EAX
00758EC7  8B C2                     MOV EAX,EDX
LAB_00758ec9:
00758EC9  8B 84 81 9C 00 00 00      MOV EAX,dword ptr [ECX + EAX*0x4 + 0x9c]
00758ED0  C7 45 F4 94 1E 7A 00      MOV dword ptr [EBP + -0xc],0x7a1e94
00758ED7  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00758EDA  EB 03                     JMP 0x00758edf
LAB_00758edc:
00758EDC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_00758edf:
00758EDF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00758EE2  85 C0                     TEST EAX,EAX
00758EE4  74 3E                     JZ 0x00758f24
00758EE6  85 FF                     TEST EDI,EDI
00758EE8  75 14                     JNZ 0x00758efe
00758EEA  51                        PUSH ECX
00758EEB  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758EEE  85 C0                     TEST EAX,EAX
00758EF0  0F 84 9A 00 00 00         JZ 0x00758f90
00758EF6  8B 33                     MOV ESI,dword ptr [EBX]
00758EF8  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
00758EFB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_00758efe:
00758EFE  33 D2                     XOR EDX,EDX
00758F00  4F                        DEC EDI
00758F01  8A 36                     MOV DH,byte ptr [ESI]
00758F03  46                        INC ESI
00758F04  85 FF                     TEST EDI,EDI
00758F06  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00758F09  75 0D                     JNZ 0x00758f18
00758F0B  51                        PUSH ECX
00758F0C  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758F0F  85 C0                     TEST EAX,EAX
00758F11  74 7D                     JZ 0x00758f90
00758F13  8B 33                     MOV ESI,dword ptr [EBX]
00758F15  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
LAB_00758f18:
00758F18  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00758F1B  33 C0                     XOR EAX,EAX
00758F1D  8A 06                     MOV AL,byte ptr [ESI]
00758F1F  4F                        DEC EDI
00758F20  03 C8                     ADD ECX,EAX
00758F22  EB 16                     JMP 0x00758f3a
LAB_00758f24:
00758F24  85 FF                     TEST EDI,EDI
00758F26  75 0D                     JNZ 0x00758f35
00758F28  51                        PUSH ECX
00758F29  FF 53 0C                  CALL dword ptr [EBX + 0xc]
00758F2C  85 C0                     TEST EAX,EAX
00758F2E  74 60                     JZ 0x00758f90
00758F30  8B 33                     MOV ESI,dword ptr [EBX]
00758F32  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
LAB_00758f35:
00758F35  4F                        DEC EDI
00758F36  33 C9                     XOR ECX,ECX
00758F38  8A 0E                     MOV CL,byte ptr [ESI]
LAB_00758f3a:
00758F3A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00758F3D  46                        INC ESI
00758F3E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00758F41  8B 02                     MOV EAX,dword ptr [EDX]
00758F43  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00758F46  66 89 0C 42               MOV word ptr [EDX + EAX*0x2],CX
00758F4A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00758F4D  83 C0 04                  ADD EAX,0x4
00758F50  3D 94 1F 7A 00            CMP EAX,0x7a1f94
00758F55  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00758F58  7C 82                     JL 0x00758edc
00758F5A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00758F5D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00758F60  83 E9 41                  SUB ECX,0x41
00758F63  85 C0                     TEST EAX,EAX
00758F65  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00758F68  74 08                     JZ 0x00758f72
00758F6A  8B C1                     MOV EAX,ECX
00758F6C  83 E8 40                  SUB EAX,0x40
00758F6F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00758f72:
00758F72  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00758F75  85 C0                     TEST EAX,EAX
00758F77  0F 8F DB FE FF FF         JG 0x00758e58
LAB_00758f7d:
00758F7D  89 7B 04                  MOV dword ptr [EBX + 0x4],EDI
00758F80  89 33                     MOV dword ptr [EBX],ESI
00758F82  5F                        POP EDI
00758F83  5E                        POP ESI
00758F84  B8 01 00 00 00            MOV EAX,0x1
00758F89  5B                        POP EBX
00758F8A  8B E5                     MOV ESP,EBP
00758F8C  5D                        POP EBP
00758F8D  C2 04 00                  RET 0x4
LAB_00758f90:
00758F90  5F                        POP EDI
00758F91  5E                        POP ESI
00758F92  33 C0                     XOR EAX,EAX
00758F94  5B                        POP EBX
00758F95  8B E5                     MOV ESP,EBP
00758F97  5D                        POP EBP
00758F98  C2 04 00                  RET 0x4
