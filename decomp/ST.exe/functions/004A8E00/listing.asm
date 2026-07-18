FUN_004a8e00:
004A8E00  55                        PUSH EBP
004A8E01  8B EC                     MOV EBP,ESP
004A8E03  A1 FC 73 80 00            MOV EAX,[0x008073fc]
004A8E08  83 F8 03                  CMP EAX,0x3
004A8E0B  77 48                     JA 0x004a8e55
switchD_004a8e0d::switchD:
004A8E0D  FF 24 85 CC 8E 4A 00      JMP dword ptr [EAX*0x4 + 0x4a8ecc]
switchD_004a8e0d::caseD_0:
004A8E14  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004A8E17  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004A8E1A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004A8E1D  2B D0                     SUB EDX,EAX
004A8E1F  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004A8E22  2B C8                     SUB ECX,EAX
004A8E24  EB 2C                     JMP 0x004a8e52
switchD_004a8e0d::caseD_1:
004A8E26  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004A8E29  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004A8E2C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004A8E2F  03 D0                     ADD EDX,EAX
004A8E31  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004A8E34  2B C8                     SUB ECX,EAX
004A8E36  EB 1A                     JMP 0x004a8e52
switchD_004a8e0d::caseD_2:
004A8E38  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004A8E3B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004A8E3E  03 D0                     ADD EDX,EAX
004A8E40  EB 08                     JMP 0x004a8e4a
switchD_004a8e0d::caseD_3:
004A8E42  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004A8E45  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004A8E48  2B D0                     SUB EDX,EAX
LAB_004a8e4a:
004A8E4A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004A8E4D  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004A8E50  03 C8                     ADD ECX,EAX
LAB_004a8e52:
004A8E52  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
switchD_004a8e0d::default:
004A8E55  56                        PUSH ESI
004A8E56  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004A8E59  85 F6                     TEST ESI,ESI
004A8E5B  7D 05                     JGE 0x004a8e62
004A8E5D  33 F6                     XOR ESI,ESI
004A8E5F  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_004a8e62:
004A8E62  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004A8E65  85 D2                     TEST EDX,EDX
004A8E67  7D 05                     JGE 0x004a8e6e
004A8E69  33 D2                     XOR EDX,EDX
004A8E6B  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
LAB_004a8e6e:
004A8E6E  8B 0D 50 67 80 00         MOV ECX,dword ptr [0x00806750]
004A8E74  0F BF 01                  MOVSX EAX,word ptr [ECX]
004A8E77  48                        DEC EAX
004A8E78  3B F0                     CMP ESI,EAX
004A8E7A  7E 05                     JLE 0x004a8e81
004A8E7C  8B F0                     MOV ESI,EAX
004A8E7E  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_004a8e81:
004A8E81  0F BF 41 02               MOVSX EAX,word ptr [ECX + 0x2]
004A8E85  48                        DEC EAX
004A8E86  3B D0                     CMP EDX,EAX
004A8E88  7E 05                     JLE 0x004a8e8f
004A8E8A  8B D0                     MOV EDX,EAX
004A8E8C  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
LAB_004a8e8f:
004A8E8F  DB 45 08                  FILD dword ptr [EBP + 0x8]
004A8E92  89 35 D8 73 80 00         MOV dword ptr [0x008073d8],ESI
004A8E98  89 15 DC 73 80 00         MOV dword ptr [0x008073dc],EDX
004A8E9E  5E                        POP ESI
004A8E9F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004A8EA5  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
004A8EAB  D9 1D D0 73 80 00         FSTP float ptr [0x008073d0]
004A8EB1  DB 45 0C                  FILD dword ptr [EBP + 0xc]
004A8EB4  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004A8EBA  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
004A8EC0  D9 1D D4 73 80 00         FSTP float ptr [0x008073d4]
004A8EC6  5D                        POP EBP
004A8EC7  C2 0C 00                  RET 0xc
