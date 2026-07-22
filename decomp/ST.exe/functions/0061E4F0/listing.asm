STLightC::sub_0061E4F0:
0061E4F0  55                        PUSH EBP
0061E4F1  8B EC                     MOV EBP,ESP
0061E4F3  83 EC 20                  SUB ESP,0x20
0061E4F6  8B 81 93 00 00 00         MOV EAX,dword ptr [ECX + 0x93]
0061E4FC  56                        PUSH ESI
0061E4FD  33 F6                     XOR ESI,ESI
0061E4FF  85 C0                     TEST EAX,EAX
0061E501  0F 8E D9 01 00 00         JLE 0x0061e6e0
0061E507  53                        PUSH EBX
0061E508  57                        PUSH EDI
LAB_0061e509:
0061E509  8B 81 9B 00 00 00         MOV EAX,dword ptr [ECX + 0x9b]
0061E50F  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0061E516  83 3C B0 01               CMP dword ptr [EAX + ESI*0x4],0x1
0061E51A  0F 8E AF 01 00 00         JLE 0x0061e6cf
0061E520  BF 14 00 00 00            MOV EDI,0x14
LAB_0061e525:
0061E525  8B 91 AC 00 00 00         MOV EDX,dword ptr [ECX + 0xac]
0061E52B  BB 05 00 00 00            MOV EBX,0x5
0061E530  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0061E536  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0061E53C  33 D2                     XOR EDX,EDX
0061E53E  89 81 AC 00 00 00         MOV dword ptr [ECX + 0xac],EAX
0061E544  C1 E8 10                  SHR EAX,0x10
0061E547  F7 F3                     DIV EBX
0061E549  85 D2                     TEST EDX,EDX
0061E54B  0F 85 63 01 00 00         JNZ 0x0061e6b4
0061E551  85 F6                     TEST ESI,ESI
0061E553  75 1C                     JNZ 0x0061e571
0061E555  85 FF                     TEST EDI,EDI
0061E557  0F 84 57 01 00 00         JZ 0x0061e6b4
0061E55D  8B 81 9B 00 00 00         MOV EAX,dword ptr [ECX + 0x9b]
0061E563  8B 10                     MOV EDX,dword ptr [EAX]
0061E565  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061E568  4A                        DEC EDX
0061E569  3B C2                     CMP EAX,EDX
0061E56B  0F 84 43 01 00 00         JZ 0x0061e6b4
LAB_0061e571:
0061E571  8B 81 AC 00 00 00         MOV EAX,dword ptr [ECX + 0xac]
0061E577  BB 0B 00 00 00            MOV EBX,0xb
0061E57C  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0061E582  05 39 30 00 00            ADD EAX,0x3039
0061E587  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0061E58E  89 81 AC 00 00 00         MOV dword ptr [ECX + 0xac],EAX
0061E594  8B 91 9F 00 00 00         MOV EDX,dword ptr [ECX + 0x9f]
0061E59A  C1 E8 10                  SHR EAX,0x10
0061E59D  8B 14 B2                  MOV EDX,dword ptr [EDX + ESI*0x4]
0061E5A0  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
0061E5A7  03 D7                     ADD EDX,EDI
0061E5A9  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0061E5B0  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061E5B3  33 D2                     XOR EDX,EDX
0061E5B5  F7 F3                     DIV EBX
0061E5B7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061E5BA  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0061E5BD  DF 6D F0                  FILD qword ptr [EBP + -0x10]
0061E5C0  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0061E5C6  D8 25 84 07 79 00         FSUB float ptr [0x00790784]
0061E5CC  D9 41 47                  FLD float ptr [ECX + 0x47]
0061E5CF  DC C0                     FADD ST0,ST0
0061E5D1  DE F9                     FDIVP
0061E5D3  D8 00                     FADD float ptr [EAX]
0061E5D5  D9 18                     FSTP float ptr [EAX]
0061E5D7  8B 81 AC 00 00 00         MOV EAX,dword ptr [ECX + 0xac]
0061E5DD  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0061E5E3  05 39 30 00 00            ADD EAX,0x3039
0061E5E8  89 81 AC 00 00 00         MOV dword ptr [ECX + 0xac],EAX
0061E5EE  8B 91 9F 00 00 00         MOV EDX,dword ptr [ECX + 0x9f]
0061E5F4  C1 E8 10                  SHR EAX,0x10
0061E5F7  8B 14 B2                  MOV EDX,dword ptr [EDX + ESI*0x4]
0061E5FA  8D 54 3A 04               LEA EDX,[EDX + EDI*0x1 + 0x4]
0061E5FE  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061E601  33 D2                     XOR EDX,EDX
0061E603  F7 F3                     DIV EBX
0061E605  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061E608  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0061E60B  DF 6D E8                  FILD qword ptr [EBP + -0x18]
0061E60E  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0061E614  D8 25 84 07 79 00         FSUB float ptr [0x00790784]
0061E61A  D9 41 47                  FLD float ptr [ECX + 0x47]
0061E61D  DC C0                     FADD ST0,ST0
0061E61F  DE F9                     FDIVP
0061E621  D8 00                     FADD float ptr [EAX]
0061E623  D9 18                     FSTP float ptr [EAX]
0061E625  8B 81 AC 00 00 00         MOV EAX,dword ptr [ECX + 0xac]
0061E62B  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0061E631  05 39 30 00 00            ADD EAX,0x3039
0061E636  89 81 AC 00 00 00         MOV dword ptr [ECX + 0xac],EAX
0061E63C  8B 91 9F 00 00 00         MOV EDX,dword ptr [ECX + 0x9f]
0061E642  C1 E8 10                  SHR EAX,0x10
0061E645  8B 14 B2                  MOV EDX,dword ptr [EDX + ESI*0x4]
0061E648  8D 54 3A 08               LEA EDX,[EDX + EDI*0x1 + 0x8]
0061E64C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0061E64F  33 D2                     XOR EDX,EDX
0061E651  F7 F3                     DIV EBX
0061E653  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061E656  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0061E659  DF 6D E0                  FILD qword ptr [EBP + -0x20]
0061E65C  D8 0D 0C 07 79 00         FMUL float ptr [0x0079070c]
0061E662  D8 25 84 07 79 00         FSUB float ptr [0x00790784]
0061E668  D9 41 47                  FLD float ptr [ECX + 0x47]
0061E66B  DC C0                     FADD ST0,ST0
0061E66D  DE F9                     FDIVP
0061E66F  D8 00                     FADD float ptr [EAX]
0061E671  D9 18                     FSTP float ptr [EAX]
0061E673  8B 91 9F 00 00 00         MOV EDX,dword ptr [ECX + 0x9f]
0061E679  8B 04 B2                  MOV EAX,dword ptr [EDX + ESI*0x4]
0061E67C  8D 1C 38                  LEA EBX,[EAX + EDI*0x1]
0061E67F  8B 44 38 10               MOV EAX,dword ptr [EAX + EDI*0x1 + 0x10]
0061E683  85 C0                     TEST EAX,EAX
0061E685  74 2D                     JZ 0x0061e6b4
0061E687  8B 14 82                  MOV EDX,dword ptr [EDX + EAX*0x4]
0061E68A  8B 1B                     MOV EBX,dword ptr [EBX]
0061E68C  89 1A                     MOV dword ptr [EDX],EBX
0061E68E  8B 91 9F 00 00 00         MOV EDX,dword ptr [ECX + 0x9f]
0061E694  8B 1C B2                  MOV EBX,dword ptr [EDX + ESI*0x4]
0061E697  8B 14 82                  MOV EDX,dword ptr [EDX + EAX*0x4]
0061E69A  8B 5C 3B 04               MOV EBX,dword ptr [EBX + EDI*0x1 + 0x4]
0061E69E  89 5A 04                  MOV dword ptr [EDX + 0x4],EBX
0061E6A1  8B 91 9F 00 00 00         MOV EDX,dword ptr [ECX + 0x9f]
0061E6A7  8B 1C B2                  MOV EBX,dword ptr [EDX + ESI*0x4]
0061E6AA  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
0061E6AD  8B 54 3B 08               MOV EDX,dword ptr [EBX + EDI*0x1 + 0x8]
0061E6B1  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
LAB_0061e6b4:
0061E6B4  8B 91 9B 00 00 00         MOV EDX,dword ptr [ECX + 0x9b]
0061E6BA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061E6BD  40                        INC EAX
0061E6BE  83 C7 14                  ADD EDI,0x14
0061E6C1  8B 1C B2                  MOV EBX,dword ptr [EDX + ESI*0x4]
0061E6C4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0061E6C7  3B C3                     CMP EAX,EBX
0061E6C9  0F 8C 56 FE FF FF         JL 0x0061e525
LAB_0061e6cf:
0061E6CF  8B 81 93 00 00 00         MOV EAX,dword ptr [ECX + 0x93]
0061E6D5  46                        INC ESI
0061E6D6  3B F0                     CMP ESI,EAX
0061E6D8  0F 8C 2B FE FF FF         JL 0x0061e509
0061E6DE  5F                        POP EDI
0061E6DF  5B                        POP EBX
LAB_0061e6e0:
0061E6E0  5E                        POP ESI
0061E6E1  8B E5                     MOV ESP,EBP
0061E6E3  5D                        POP EBP
0061E6E4  C3                        RET
