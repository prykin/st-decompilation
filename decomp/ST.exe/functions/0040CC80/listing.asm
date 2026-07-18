FUN_0040cc80:
0040CC80  55                        PUSH EBP
0040CC81  8B EC                     MOV EBP,ESP
0040CC83  51                        PUSH ECX
0040CC84  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0040CC87  57                        PUSH EDI
0040CC88  50                        PUSH EAX
0040CC89  E8 E1 5B FF FF            CALL 0x0040286f
0040CC8E  85 C0                     TEST EAX,EAX
0040CC90  0F 84 C7 00 00 00         JZ 0x0040cd5d
0040CC96  8B B8 9F 00 00 00         MOV EDI,dword ptr [EAX + 0x9f]
0040CC9C  85 FF                     TEST EDI,EDI
0040CC9E  0F 84 B9 00 00 00         JZ 0x0040cd5d
0040CCA4  8B 88 A7 00 00 00         MOV ECX,dword ptr [EAX + 0xa7]
0040CCAA  53                        PUSH EBX
0040CCAB  85 C9                     TEST ECX,ECX
0040CCAD  56                        PUSH ESI
0040CCAE  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0040CCB5  7C 4C                     JL 0x0040cd03
0040CCB7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0040CCBA  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0040CCBD  8D 3C CF                  LEA EDI,[EDI + ECX*0x8]
LAB_0040ccc0:
0040CCC0  83 7D 08 FE               CMP dword ptr [EBP + 0x8],-0x2
0040CCC4  7E 3D                     JLE 0x0040cd03
0040CCC6  66 8B 70 47               MOV SI,word ptr [EAX + 0x47]
0040CCCA  8B CF                     MOV ECX,EDI
0040CCCC  33 D2                     XOR EDX,EDX
LAB_0040ccce:
0040CCCE  66 39 31                  CMP word ptr [ECX],SI
0040CCD1  75 14                     JNZ 0x0040cce7
0040CCD3  66 8B 59 02               MOV BX,word ptr [ECX + 0x2]
0040CCD7  66 3B 58 49               CMP BX,word ptr [EAX + 0x49]
0040CCDB  75 0A                     JNZ 0x0040cce7
0040CCDD  66 8B 59 04               MOV BX,word ptr [ECX + 0x4]
0040CCE1  66 3B 58 4B               CMP BX,word ptr [EAX + 0x4b]
0040CCE5  74 20                     JZ 0x0040cd07
LAB_0040cce7:
0040CCE7  42                        INC EDX
0040CCE8  83 C1 08                  ADD ECX,0x8
0040CCEB  83 FA 09                  CMP EDX,0x9
0040CCEE  7C DE                     JL 0x0040ccce
0040CCF0  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0040CCF3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0040CCF6  4E                        DEC ESI
0040CCF7  83 EF 48                  SUB EDI,0x48
0040CCFA  49                        DEC ECX
0040CCFB  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0040CCFE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0040CD01  79 BD                     JNS 0x0040ccc0
LAB_0040cd03:
0040CD03  33 C9                     XOR ECX,ECX
0040CD05  EB 03                     JMP 0x0040cd0a
LAB_0040cd07:
0040CD07  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_0040cd0a:
0040CD0A  8B 90 A7 00 00 00         MOV EDX,dword ptr [EAX + 0xa7]
0040CD10  33 F6                     XOR ESI,ESI
0040CD12  8D 4C 11 01               LEA ECX,[ECX + EDX*0x1 + 0x1]
0040CD16  8B 90 9F 00 00 00         MOV EDX,dword ptr [EAX + 0x9f]
0040CD1C  8B 80 A3 00 00 00         MOV EAX,dword ptr [EAX + 0xa3]
0040CD22  8D 3C C9                  LEA EDI,[ECX + ECX*0x8]
0040CD25  3B C8                     CMP ECX,EAX
0040CD27  8D 14 FA                  LEA EDX,[EDX + EDI*0x8]
0040CD2A  7D 26                     JGE 0x0040cd52
0040CD2C  2B C1                     SUB EAX,ECX
LAB_0040cd2e:
0040CD2E  66 8B 0A                  MOV CX,word ptr [EDX]
0040CD31  66 3B 4A B8               CMP CX,word ptr [EDX + -0x48]
0040CD35  75 14                     JNZ 0x0040cd4b
0040CD37  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
0040CD3B  66 3B 4A BA               CMP CX,word ptr [EDX + -0x46]
0040CD3F  75 0A                     JNZ 0x0040cd4b
0040CD41  66 8B 4A 04               MOV CX,word ptr [EDX + 0x4]
0040CD45  66 3B 4A BC               CMP CX,word ptr [EDX + -0x44]
0040CD49  74 01                     JZ 0x0040cd4c
LAB_0040cd4b:
0040CD4B  46                        INC ESI
LAB_0040cd4c:
0040CD4C  83 C2 48                  ADD EDX,0x48
0040CD4F  48                        DEC EAX
0040CD50  75 DC                     JNZ 0x0040cd2e
LAB_0040cd52:
0040CD52  8B C6                     MOV EAX,ESI
0040CD54  5E                        POP ESI
0040CD55  5B                        POP EBX
0040CD56  5F                        POP EDI
0040CD57  8B E5                     MOV ESP,EBP
0040CD59  5D                        POP EBP
0040CD5A  C2 04 00                  RET 0x4
LAB_0040cd5d:
0040CD5D  B8 FC FF FF FF            MOV EAX,0xfffffffc
0040CD62  5F                        POP EDI
0040CD63  8B E5                     MOV ESP,EBP
0040CD65  5D                        POP EBP
0040CD66  C2 04 00                  RET 0x4
