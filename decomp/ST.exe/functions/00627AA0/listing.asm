FUN_00627aa0:
00627AA0  55                        PUSH EBP
00627AA1  8B EC                     MOV EBP,ESP
00627AA3  83 EC 08                  SUB ESP,0x8
00627AA6  53                        PUSH EBX
00627AA7  56                        PUSH ESI
00627AA8  57                        PUSH EDI
00627AA9  8B F9                     MOV EDI,ECX
00627AAB  8B 87 AE 02 00 00         MOV EAX,dword ptr [EDI + 0x2ae]
00627AB1  83 F8 02                  CMP EAX,0x2
00627AB4  0F 84 0C 02 00 00         JZ 0x00627cc6
00627ABA  83 F8 03                  CMP EAX,0x3
00627ABD  0F 84 03 02 00 00         JZ 0x00627cc6
00627AC3  83 F8 04                  CMP EAX,0x4
00627AC6  0F 84 FA 01 00 00         JZ 0x00627cc6
00627ACC  83 F8 05                  CMP EAX,0x5
00627ACF  0F 84 F1 01 00 00         JZ 0x00627cc6
00627AD5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00627AD8  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00627ADF  83 F8 08                  CMP EAX,0x8
00627AE2  0F 83 DE 01 00 00         JNC 0x00627cc6
00627AE8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00627AEE  85 C9                     TEST ECX,ECX
00627AF0  74 11                     JZ 0x00627b03
00627AF2  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00627AF5  80 BC D2 E9 87 80 00 08   CMP byte ptr [EDX + EDX*0x8 + 0x8087e9],0x8
00627AFD  0F 83 C3 01 00 00         JNC 0x00627cc6
LAB_00627b03:
00627B03  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00627B06  8A 1D 8F 8A 80 00         MOV BL,byte ptr [0x00808a8f]
00627B0C  8A D1                     MOV DL,CL
00627B0E  88 4D 0B                  MOV byte ptr [EBP + 0xb],CL
00627B11  84 DB                     TEST BL,BL
00627B13  88 55 F8                  MOV byte ptr [EBP + -0x8],DL
00627B16  74 31                     JZ 0x00627b49
00627B18  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00627B1B  33 DB                     XOR EBX,EBX
00627B1D  81 E2 FF 00 00 00         AND EDX,0xff
00627B23  8D 34 D2                  LEA ESI,[EDX + EDX*0x8]
00627B26  8B D0                     MOV EDX,EAX
00627B28  81 E2 FF 00 00 00         AND EDX,0xff
00627B2E  8A 8C F6 EA 87 80 00      MOV CL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
00627B35  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
00627B38  3A 8C D2 EA 87 80 00      CMP CL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
00627B3F  8A 4D 0B                  MOV CL,byte ptr [EBP + 0xb]
00627B42  0F 95 C3                  SETNZ BL
00627B45  8B D3                     MOV EDX,EBX
00627B47  EB 7A                     JMP 0x00627bc3
LAB_00627b49:
00627B49  3A C2                     CMP AL,DL
00627B4B  74 6B                     JZ 0x00627bb8
00627B4D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00627B50  8B D0                     MOV EDX,EAX
00627B52  81 E2 FF 00 00 00         AND EDX,0xff
00627B58  81 E6 FF 00 00 00         AND ESI,0xff
00627B5E  8A 9C D6 4F 8A 80 00      MOV BL,byte ptr [ESI + EDX*0x8 + 0x808a4f]
00627B65  84 DB                     TEST BL,BL
00627B67  75 10                     JNZ 0x00627b79
00627B69  38 9C F2 4F 8A 80 00      CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],BL
00627B70  75 07                     JNZ 0x00627b79
00627B72  BA FE FF FF FF            MOV EDX,0xfffffffe
00627B77  EB 41                     JMP 0x00627bba
LAB_00627b79:
00627B79  80 FB 01                  CMP BL,0x1
00627B7C  75 0F                     JNZ 0x00627b8d
00627B7E  80 BC F2 4F 8A 80 00 00   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x0
00627B86  75 05                     JNZ 0x00627b8d
00627B88  83 CA FF                  OR EDX,0xffffffff
00627B8B  EB 2D                     JMP 0x00627bba
LAB_00627b8d:
00627B8D  84 DB                     TEST BL,BL
00627B8F  75 11                     JNZ 0x00627ba2
00627B91  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
00627B99  75 07                     JNZ 0x00627ba2
00627B9B  BA 01 00 00 00            MOV EDX,0x1
00627BA0  EB 18                     JMP 0x00627bba
LAB_00627ba2:
00627BA2  80 FB 01                  CMP BL,0x1
00627BA5  75 11                     JNZ 0x00627bb8
00627BA7  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
00627BAF  75 07                     JNZ 0x00627bb8
00627BB1  BA 02 00 00 00            MOV EDX,0x2
00627BB6  EB 02                     JMP 0x00627bba
LAB_00627bb8:
00627BB8  33 D2                     XOR EDX,EDX
LAB_00627bba:
00627BBA  33 DB                     XOR EBX,EBX
00627BBC  85 D2                     TEST EDX,EDX
00627BBE  0F 9C C3                  SETL BL
00627BC1  8B D3                     MOV EDX,EBX
LAB_00627bc3:
00627BC3  83 FA 01                  CMP EDX,0x1
00627BC6  0F 84 BE 00 00 00         JZ 0x00627c8a
00627BCC  8A D1                     MOV DL,CL
00627BCE  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
00627BD4  84 C9                     TEST CL,CL
00627BD6  88 55 08                  MOV byte ptr [EBP + 0x8],DL
00627BD9  74 2E                     JZ 0x00627c09
00627BDB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00627BDE  33 C9                     XOR ECX,ECX
00627BE0  81 E2 FF 00 00 00         AND EDX,0xff
00627BE6  8D 34 D2                  LEA ESI,[EDX + EDX*0x8]
00627BE9  8B D0                     MOV EDX,EAX
00627BEB  81 E2 FF 00 00 00         AND EDX,0xff
00627BF1  8A 9C F6 EA 87 80 00      MOV BL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
00627BF8  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
00627BFB  8A 94 D2 EA 87 80 00      MOV DL,byte ptr [EDX + EDX*0x8 + 0x8087ea]
00627C02  3A D3                     CMP DL,BL
00627C04  0F 95 C1                  SETNZ CL
00627C07  EB 7A                     JMP 0x00627c83
LAB_00627c09:
00627C09  3A D0                     CMP DL,AL
00627C0B  74 6D                     JZ 0x00627c7a
00627C0D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00627C10  8B F0                     MOV ESI,EAX
00627C12  81 E2 FF 00 00 00         AND EDX,0xff
00627C18  81 E6 FF 00 00 00         AND ESI,0xff
00627C1E  8A 9C D6 4F 8A 80 00      MOV BL,byte ptr [ESI + EDX*0x8 + 0x808a4f]
00627C25  84 DB                     TEST BL,BL
00627C27  75 12                     JNZ 0x00627c3b
00627C29  8A 8C F2 4F 8A 80 00      MOV CL,byte ptr [EDX + ESI*0x8 + 0x808a4f]
00627C30  84 C9                     TEST CL,CL
00627C32  75 07                     JNZ 0x00627c3b
00627C34  BA FE FF FF FF            MOV EDX,0xfffffffe
00627C39  EB 41                     JMP 0x00627c7c
LAB_00627c3b:
00627C3B  80 FB 01                  CMP BL,0x1
00627C3E  75 10                     JNZ 0x00627c50
00627C40  8A 8C F2 4F 8A 80 00      MOV CL,byte ptr [EDX + ESI*0x8 + 0x808a4f]
00627C47  84 C9                     TEST CL,CL
00627C49  75 05                     JNZ 0x00627c50
00627C4B  83 CA FF                  OR EDX,0xffffffff
00627C4E  EB 2C                     JMP 0x00627c7c
LAB_00627c50:
00627C50  84 DB                     TEST BL,BL
00627C52  75 11                     JNZ 0x00627c65
00627C54  80 BC F2 4F 8A 80 00 01   CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],0x1
00627C5C  75 07                     JNZ 0x00627c65
00627C5E  BA 01 00 00 00            MOV EDX,0x1
00627C63  EB 17                     JMP 0x00627c7c
LAB_00627c65:
00627C65  80 FB 01                  CMP BL,0x1
00627C68  75 10                     JNZ 0x00627c7a
00627C6A  38 9C F2 4F 8A 80 00      CMP byte ptr [EDX + ESI*0x8 + 0x808a4f],BL
00627C71  75 07                     JNZ 0x00627c7a
00627C73  BA 02 00 00 00            MOV EDX,0x2
00627C78  EB 02                     JMP 0x00627c7c
LAB_00627c7a:
00627C7A  33 D2                     XOR EDX,EDX
LAB_00627c7c:
00627C7C  33 C9                     XOR ECX,ECX
00627C7E  85 D2                     TEST EDX,EDX
00627C80  0F 9C C1                  SETL CL
LAB_00627c83:
00627C83  8B D1                     MOV EDX,ECX
00627C85  83 FA 01                  CMP EDX,0x1
00627C88  75 3C                     JNZ 0x00627cc6
LAB_00627c8a:
00627C8A  33 D2                     XOR EDX,EDX
00627C8C  8A 97 AD 02 00 00         MOV DL,byte ptr [EDI + 0x2ad]
00627C92  83 FA 03                  CMP EDX,0x3
00627C95  77 36                     JA 0x00627ccd
switchD_00627c97::switchD:
00627C97  FF 24 95 DC 7C 62 00      JMP dword ptr [EDX*0x4 + 0x627cdc]
switchD_00627c97::caseD_0:
00627C9E  50                        PUSH EAX
00627C9F  8B CF                     MOV ECX,EDI
00627CA1  E8 BF AB DD FF            CALL 0x00402865
00627CA6  5F                        POP EDI
00627CA7  5E                        POP ESI
00627CA8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00627CAB  5B                        POP EBX
00627CAC  8B E5                     MOV ESP,EBP
00627CAE  5D                        POP EBP
00627CAF  C2 04 00                  RET 0x4
switchD_00627c97::caseD_1:
00627CB2  50                        PUSH EAX
00627CB3  8B CF                     MOV ECX,EDI
00627CB5  E8 57 9B DD FF            CALL 0x00401811
00627CBA  5F                        POP EDI
00627CBB  5E                        POP ESI
00627CBC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00627CBF  5B                        POP EBX
00627CC0  8B E5                     MOV ESP,EBP
00627CC2  5D                        POP EBP
00627CC3  C2 04 00                  RET 0x4
switchD_00627c97::caseD_3:
00627CC6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
switchD_00627c97::default:
00627CCD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00627CD0  5F                        POP EDI
00627CD1  5E                        POP ESI
00627CD2  5B                        POP EBX
00627CD3  8B E5                     MOV ESP,EBP
00627CD5  5D                        POP EBP
00627CD6  C2 04 00                  RET 0x4
