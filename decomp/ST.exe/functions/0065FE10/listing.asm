FUN_0065fe10:
0065FE10  55                        PUSH EBP
0065FE11  8B EC                     MOV EBP,ESP
0065FE13  83 EC 34                  SUB ESP,0x34
0065FE16  53                        PUSH EBX
0065FE17  56                        PUSH ESI
0065FE18  8B F1                     MOV ESI,ECX
0065FE1A  57                        PUSH EDI
0065FE1B  B9 0B 00 00 00            MOV ECX,0xb
0065FE20  33 C0                     XOR EAX,EAX
0065FE22  8D 7D CC                  LEA EDI,[EBP + -0x34]
0065FE25  33 DB                     XOR EBX,EBX
0065FE27  F3 AB                     STOSD.REP ES:EDI
0065FE29  8B CE                     MOV ECX,ESI
0065FE2B  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0065FE2E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0065FE31  89 9E A7 00 00 00         MOV dword ptr [ESI + 0xa7],EBX
0065FE37  E8 FF 35 DA FF            CALL 0x0040343b
0065FE3C  85 C0                     TEST EAX,EAX
0065FE3E  75 0C                     JNZ 0x0065fe4c
0065FE40  5F                        POP EDI
0065FE41  5E                        POP ESI
0065FE42  83 C8 FF                  OR EAX,0xffffffff
0065FE45  5B                        POP EBX
0065FE46  8B E5                     MOV ESP,EBP
0065FE48  5D                        POP EBP
0065FE49  C2 08 00                  RET 0x8
LAB_0065fe4c:
0065FE4C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0065FE4F  0F BF 46 39               MOVSX EAX,word ptr [ESI + 0x39]
0065FE53  8B CF                     MOV ECX,EDI
0065FE55  81 E9 DD 00 00 00         SUB ECX,0xdd
0065FE5B  74 28                     JZ 0x0065fe85
0065FE5D  49                        DEC ECX
0065FE5E  74 19                     JZ 0x0065fe79
0065FE60  83 E9 02                  SUB ECX,0x2
0065FE63  74 04                     JZ 0x0065fe69
0065FE65  33 C0                     XOR EAX,EAX
0065FE67  EB 28                     JMP 0x0065fe91
LAB_0065fe69:
0065FE69  33 C9                     XOR ECX,ECX
0065FE6B  83 F8 03                  CMP EAX,0x3
0065FE6E  0F 95 C1                  SETNZ CL
0065FE71  49                        DEC ECX
0065FE72  83 E1 61                  AND ECX,0x61
0065FE75  8B C1                     MOV EAX,ECX
0065FE77  EB 18                     JMP 0x0065fe91
LAB_0065fe79:
0065FE79  83 E8 03                  SUB EAX,0x3
0065FE7C  F7 D8                     NEG EAX
0065FE7E  1B C0                     SBB EAX,EAX
0065FE80  83 E0 4F                  AND EAX,0x4f
0065FE83  EB 0C                     JMP 0x0065fe91
LAB_0065fe85:
0065FE85  83 E8 03                  SUB EAX,0x3
0065FE88  F7 D8                     NEG EAX
0065FE8A  1B C0                     SBB EAX,EAX
0065FE8C  24 DB                     AND AL,0xdb
0065FE8E  83 C0 5E                  ADD EAX,0x5e
LAB_0065fe91:
0065FE91  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0065FE94  8B CE                     MOV ECX,ESI
0065FE96  52                        PUSH EDX
0065FE97  6A 01                     PUSH 0x1
0065FE99  50                        PUSH EAX
0065FE9A  E8 42 3A DA FF            CALL 0x004038e1
0065FE9F  8B D8                     MOV EBX,EAX
0065FEA1  85 DB                     TEST EBX,EBX
0065FEA3  0F 84 C2 00 00 00         JZ 0x0065ff6b
0065FEA9  0F BF 46 39               MOVSX EAX,word ptr [ESI + 0x39]
0065FEAD  85 C0                     TEST EAX,EAX
0065FEAF  7E 18                     JLE 0x0065fec9
0065FEB1  83 F8 02                  CMP EAX,0x2
0065FEB4  7E 0C                     JLE 0x0065fec2
0065FEB6  83 F8 03                  CMP EAX,0x3
0065FEB9  75 0E                     JNZ 0x0065fec9
0065FEBB  B8 60 00 00 00            MOV EAX,0x60
0065FEC0  EB 09                     JMP 0x0065fecb
LAB_0065fec2:
0065FEC2  B8 3B 00 00 00            MOV EAX,0x3b
0065FEC7  EB 02                     JMP 0x0065fecb
LAB_0065fec9:
0065FEC9  33 C0                     XOR EAX,EAX
LAB_0065fecb:
0065FECB  6A 00                     PUSH 0x0
0065FECD  6A 01                     PUSH 0x1
0065FECF  50                        PUSH EAX
0065FED0  8B CE                     MOV ECX,ESI
0065FED2  E8 0A 3A DA FF            CALL 0x004038e1
0065FED7  33 D2                     XOR EDX,EDX
0065FED9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065FEDC  3B C2                     CMP EAX,EDX
0065FEDE  0F 84 87 00 00 00         JZ 0x0065ff6b
0065FEE4  0F BF 46 39               MOVSX EAX,word ptr [ESI + 0x39]
0065FEE8  8B CF                     MOV ECX,EDI
0065FEEA  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0065FEED  81 E9 DD 00 00 00         SUB ECX,0xdd
0065FEF3  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
0065FEF6  74 2A                     JZ 0x0065ff22
0065FEF8  49                        DEC ECX
0065FEF9  74 1B                     JZ 0x0065ff16
0065FEFB  83 E9 02                  SUB ECX,0x2
0065FEFE  74 05                     JZ 0x0065ff05
0065FF00  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0065FF03  EB 2C                     JMP 0x0065ff31
LAB_0065ff05:
0065FF05  33 C9                     XOR ECX,ECX
0065FF07  83 F8 03                  CMP EAX,0x3
0065FF0A  0F 95 C1                  SETNZ CL
0065FF0D  49                        DEC ECX
0065FF0E  83 E1 61                  AND ECX,0x61
0065FF11  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0065FF14  EB 1B                     JMP 0x0065ff31
LAB_0065ff16:
0065FF16  83 E8 03                  SUB EAX,0x3
0065FF19  F7 D8                     NEG EAX
0065FF1B  1B C0                     SBB EAX,EAX
0065FF1D  83 E0 4F                  AND EAX,0x4f
0065FF20  EB 0C                     JMP 0x0065ff2e
LAB_0065ff22:
0065FF22  83 E8 03                  SUB EAX,0x3
0065FF25  F7 D8                     NEG EAX
0065FF27  1B C0                     SBB EAX,EAX
0065FF29  24 DB                     AND AL,0xdb
0065FF2B  83 C0 5E                  ADD EAX,0x5e
LAB_0065ff2e:
0065FF2E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_0065ff31:
0065FF31  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065FF34  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0065FF37  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0065FF3A  66 8B 46 7D               MOV AX,word ptr [ESI + 0x7d]
0065FF3E  66 3D FE FF               CMP AX,0xfffe
0065FF42  74 27                     JZ 0x0065ff6b
0065FF44  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065FF4A  3B CA                     CMP ECX,EDX
0065FF4C  74 1D                     JZ 0x0065ff6b
0065FF4E  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0065FF51  50                        PUSH EAX
0065FF52  52                        PUSH EDX
0065FF53  E8 A1 5D DA FF            CALL 0x00405cf9
0065FF58  85 C0                     TEST EAX,EAX
0065FF5A  74 0F                     JZ 0x0065ff6b
0065FF5C  8B 10                     MOV EDX,dword ptr [EAX]
0065FF5E  8D 4D CC                  LEA ECX,[EBP + -0x34]
0065FF61  51                        PUSH ECX
0065FF62  6A 08                     PUSH 0x8
0065FF64  8B C8                     MOV ECX,EAX
0065FF66  FF 52 08                  CALL dword ptr [EDX + 0x8]
0065FF69  EB 07                     JMP 0x0065ff72
LAB_0065ff6b:
0065FF6B  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_0065ff72:
0065FF72  85 DB                     TEST EBX,EBX
0065FF74  74 06                     JZ 0x0065ff7c
0065FF76  53                        PUSH EBX
0065FF77  E8 94 E1 04 00            CALL 0x006ae110
LAB_0065ff7c:
0065FF7C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065FF7F  85 C0                     TEST EAX,EAX
0065FF81  74 06                     JZ 0x0065ff89
0065FF83  50                        PUSH EAX
0065FF84  E8 87 E1 04 00            CALL 0x006ae110
LAB_0065ff89:
0065FF89  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065FF8C  5F                        POP EDI
0065FF8D  5E                        POP ESI
0065FF8E  5B                        POP EBX
0065FF8F  8B E5                     MOV ESP,EBP
0065FF91  5D                        POP EBP
0065FF92  C2 08 00                  RET 0x8
