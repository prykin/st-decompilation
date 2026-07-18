SettMapMTy::UpdatePing:
005CFCD0  55                        PUSH EBP
005CFCD1  8B EC                     MOV EBP,ESP
005CFCD3  83 EC 48                  SUB ESP,0x48
005CFCD6  8B 81 84 1F 00 00         MOV EAX,dword ptr [ECX + 0x1f84]
005CFCDC  53                        PUSH EBX
005CFCDD  56                        PUSH ESI
005CFCDE  57                        PUSH EDI
005CFCDF  85 C0                     TEST EAX,EAX
005CFCE1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005CFCE4  0F 84 07 01 00 00         JZ 0x005cfdf1
005CFCEA  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005CFCEF  8D 55 BC                  LEA EDX,[EBP + -0x44]
005CFCF2  8D 4D B8                  LEA ECX,[EBP + -0x48]
005CFCF5  6A 00                     PUSH 0x0
005CFCF7  52                        PUSH EDX
005CFCF8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005CFCFB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CFD01  E8 EA DA 15 00            CALL 0x0072d7f0
005CFD06  8B F0                     MOV ESI,EAX
005CFD08  83 C4 08                  ADD ESP,0x8
005CFD0B  85 F6                     TEST ESI,ESI
005CFD0D  0F 85 9F 00 00 00         JNZ 0x005cfdb2
005CFD13  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005CFD16  33 D2                     XOR EDX,EDX
005CFD18  8B B1 84 1F 00 00         MOV ESI,dword ptr [ECX + 0x1f84]
005CFD1E  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
005CFD21  85 FF                     TEST EDI,EDI
005CFD23  7E 7B                     JLE 0x005cfda0
005CFD25  3B D7                     CMP EDX,EDI
LAB_005cfd27:
005CFD27  73 0D                     JNC 0x005cfd36
005CFD29  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005CFD2C  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
005CFD2F  0F AF C2                  IMUL EAX,EDX
005CFD32  03 C3                     ADD EAX,EBX
005CFD34  EB 02                     JMP 0x005cfd38
LAB_005cfd36:
005CFD36  33 C0                     XOR EAX,EAX
LAB_005cfd38:
005CFD38  85 C0                     TEST EAX,EAX
005CFD3A  74 15                     JZ 0x005cfd51
005CFD3C  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005CFD3F  39 58 06                  CMP dword ptr [EAX + 0x6],EBX
005CFD42  75 0D                     JNZ 0x005cfd51
005CFD44  8A 58 04                  MOV BL,byte ptr [EAX + 0x4]
005CFD47  80 FB 02                  CMP BL,0x2
005CFD4A  74 1C                     JZ 0x005cfd68
005CFD4C  80 FB 03                  CMP BL,0x3
005CFD4F  74 17                     JZ 0x005cfd68
LAB_005cfd51:
005CFD51  42                        INC EDX
005CFD52  3B D7                     CMP EDX,EDI
005CFD54  7C D1                     JL 0x005cfd27
005CFD56  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005CFD59  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CFD5F  5F                        POP EDI
005CFD60  5E                        POP ESI
005CFD61  5B                        POP EBX
005CFD62  8B E5                     MOV ESP,EBP
005CFD64  5D                        POP EBP
005CFD65  C2 08 00                  RET 0x8
LAB_005cfd68:
005CFD68  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005CFD6B  89 70 4B                  MOV dword ptr [EAX + 0x4b],ESI
005CFD6E  8B B9 88 1F 00 00         MOV EDI,dword ptr [ECX + 0x1f88]
005CFD74  2B D7                     SUB EDX,EDI
005CFD76  C1 E2 05                  SHL EDX,0x5
005CFD79  8D 84 0A A4 1F 00 00      LEA EAX,[EDX + ECX*0x1 + 0x1fa4]
005CFD80  8B 94 0A A4 1F 00 00      MOV EDX,dword ptr [EDX + ECX*0x1 + 0x1fa4]
005CFD87  85 D2                     TEST EDX,EDX
005CFD89  74 15                     JZ 0x005cfda0
005CFD8B  C7 41 2D 05 00 00 00      MOV dword ptr [ECX + 0x2d],0x5
005CFD92  8B 00                     MOV EAX,dword ptr [EAX]
005CFD94  8D 51 1D                  LEA EDX,[ECX + 0x1d]
005CFD97  52                        PUSH EDX
005CFD98  50                        PUSH EAX
005CFD99  6A 02                     PUSH 0x2
005CFD9B  E8 E0 62 11 00            CALL 0x006e6080
LAB_005cfda0:
005CFDA0  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005CFDA3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CFDA9  5F                        POP EDI
005CFDAA  5E                        POP ESI
005CFDAB  5B                        POP EBX
005CFDAC  8B E5                     MOV ESP,EBP
005CFDAE  5D                        POP EBP
005CFDAF  C2 08 00                  RET 0x8
LAB_005cfdb2:
005CFDB2  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005CFDB5  68 9C D3 7C 00            PUSH 0x7cd39c
005CFDBA  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CFDBF  56                        PUSH ESI
005CFDC0  6A 00                     PUSH 0x0
005CFDC2  68 BF 04 00 00            PUSH 0x4bf
005CFDC7  68 58 D2 7C 00            PUSH 0x7cd258
005CFDCC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005CFDD2  E8 F9 D6 0D 00            CALL 0x006ad4d0
005CFDD7  83 C4 18                  ADD ESP,0x18
005CFDDA  85 C0                     TEST EAX,EAX
005CFDDC  74 01                     JZ 0x005cfddf
005CFDDE  CC                        INT3
LAB_005cfddf:
005CFDDF  68 BF 04 00 00            PUSH 0x4bf
005CFDE4  68 58 D2 7C 00            PUSH 0x7cd258
005CFDE9  6A 00                     PUSH 0x0
005CFDEB  56                        PUSH ESI
005CFDEC  E8 4F 60 0D 00            CALL 0x006a5e40
LAB_005cfdf1:
005CFDF1  5F                        POP EDI
005CFDF2  5E                        POP ESI
005CFDF3  5B                        POP EBX
005CFDF4  8B E5                     MOV ESP,EBP
005CFDF6  5D                        POP EBP
005CFDF7  C2 08 00                  RET 0x8
