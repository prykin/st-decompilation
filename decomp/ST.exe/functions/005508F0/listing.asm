FUN_005508f0:
005508F0  55                        PUSH EBP
005508F1  8B EC                     MOV EBP,ESP
005508F3  83 EC 18                  SUB ESP,0x18
005508F6  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005508F9  53                        PUSH EBX
005508FA  33 C9                     XOR ECX,ECX
005508FC  80 CB FF                  OR BL,0xff
005508FF  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
00550905  33 C0                     XOR EAX,EAX
00550907  56                        PUSH ESI
00550908  57                        PUSH EDI
00550909  85 C9                     TEST ECX,ECX
0055090B  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
0055090E  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
00550912  76 47                     JBE 0x0055095b
00550914  BA F6 8A 80 00            MOV EDX,0x808af6
LAB_00550919:
00550919  8B 72 FA                  MOV ESI,dword ptr [EDX + -0x6]
0055091C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0055091F  3B F7                     CMP ESI,EDI
00550921  75 05                     JNZ 0x00550928
00550923  80 3A 01                  CMP byte ptr [EDX],0x1
00550926  74 0D                     JZ 0x00550935
LAB_00550928:
00550928  40                        INC EAX
00550929  81 C2 9C 00 00 00         ADD EDX,0x9c
0055092F  3B C1                     CMP EAX,ECX
00550931  72 E6                     JC 0x00550919
00550933  EB 06                     JMP 0x0055093b
LAB_00550935:
00550935  8A 5A FE                  MOV BL,byte ptr [EDX + -0x2]
00550938  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
LAB_0055093b:
0055093B  85 C9                     TEST ECX,ECX
0055093D  76 1C                     JBE 0x0055095b
0055093F  B8 F6 8A 80 00            MOV EAX,0x808af6
00550944  8B F1                     MOV ESI,ECX
LAB_00550946:
00550946  38 58 FE                  CMP byte ptr [EAX + -0x2],BL
00550949  75 08                     JNZ 0x00550953
0055094B  80 38 01                  CMP byte ptr [EAX],0x1
0055094E  75 03                     JNZ 0x00550953
00550950  FE 45 FF                  INC byte ptr [EBP + -0x1]
LAB_00550953:
00550953  05 9C 00 00 00            ADD EAX,0x9c
00550958  4E                        DEC ESI
00550959  75 EB                     JNZ 0x00550946
LAB_0055095b:
0055095B  A0 7E 87 80 00            MOV AL,[0x0080877e]
00550960  84 C0                     TEST AL,AL
00550962  0F 84 E2 00 00 00         JZ 0x00550a4a
00550968  80 7D FF 02               CMP byte ptr [EBP + -0x1],0x2
0055096C  0F 83 D8 00 00 00         JNC 0x00550a4a
00550972  80 FB FF                  CMP BL,0xff
00550975  0F 84 CF 00 00 00         JZ 0x00550a4a
0055097B  A0 A0 87 80 00            MOV AL,[0x008087a0]
00550980  3C 04                     CMP AL,0x4
00550982  74 14                     JZ 0x00550998
00550984  3C 07                     CMP AL,0x7
00550986  74 10                     JZ 0x00550998
00550988  3C 13                     CMP AL,0x13
0055098A  74 0C                     JZ 0x00550998
0055098C  3C 0D                     CMP AL,0xd
0055098E  74 08                     JZ 0x00550998
00550990  3C 0E                     CMP AL,0xe
00550992  0F 85 B2 00 00 00         JNZ 0x00550a4a
LAB_00550998:
00550998  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0055099B  8B F8                     MOV EDI,EAX
0055099D  81 E7 FF 00 00 00         AND EDI,0xff
005509A3  8A 97 50 99 80 00         MOV DL,byte ptr [EDI + 0x809950]
005509A9  84 D2                     TEST DL,DL
005509AB  0F 85 9C 00 00 00         JNZ 0x00550a4d
005509B1  33 DB                     XOR EBX,EBX
005509B3  85 C9                     TEST ECX,ECX
005509B5  76 68                     JBE 0x00550a1f
005509B7  BE F6 8A 80 00            MOV ESI,0x808af6
LAB_005509bc:
005509BC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005509BF  8B 4E FA                  MOV ECX,dword ptr [ESI + -0x6]
005509C2  3B C8                     CMP ECX,EAX
005509C4  75 47                     JNZ 0x00550a0d
005509C6  80 3E 01                  CMP byte ptr [ESI],0x1
005509C9  75 42                     JNZ 0x00550a0d
005509CB  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005509D1  8D 4E BA                  LEA ECX,[ESI + -0x46]
005509D4  51                        PUSH ECX
005509D5  52                        PUSH EDX
005509D6  68 73 42 00 00            PUSH 0x4273
005509DB  C6 06 00                  MOV byte ptr [ESI],0x0
005509DE  E8 5D F7 15 00            CALL 0x006b0140
005509E3  50                        PUSH EAX
005509E4  68 1C 41 7C 00            PUSH 0x7c411c
005509E9  68 3A F3 80 00            PUSH 0x80f33a
005509EE  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005509F4  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
005509FA  83 C4 10                  ADD ESP,0x10
005509FD  85 C9                     TEST ECX,ECX
005509FF  74 0C                     JZ 0x00550a0d
00550A01  6A 08                     PUSH 0x8
00550A03  68 3A F3 80 00            PUSH 0x80f33a
00550A08  E8 CB 0A EB FF            CALL 0x004014d8
LAB_00550a0d:
00550A0D  33 C0                     XOR EAX,EAX
00550A0F  43                        INC EBX
00550A10  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
00550A15  81 C6 9C 00 00 00         ADD ESI,0x9c
00550A1B  3B D8                     CMP EBX,EAX
00550A1D  72 9D                     JC 0x005509bc
LAB_00550a1f:
00550A1F  8D 04 FF                  LEA EAX,[EDI + EDI*0x8]
00550A22  33 C9                     XOR ECX,ECX
00550A24  6A FF                     PUSH -0x1
00550A26  8D 55 E8                  LEA EDX,[EBP + -0x18]
00550A29  8A 8C C0 E8 87 80 00      MOV CL,byte ptr [EAX + EAX*0x8 + 0x8087e8]
00550A30  6A 01                     PUSH 0x1
00550A32  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00550A35  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00550A38  52                        PUSH EDX
00550A39  6A 05                     PUSH 0x5
00550A3B  C7 45 E8 08 00 00 00      MOV dword ptr [EBP + -0x18],0x8
00550A42  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00550A45  E8 E9 31 EB FF            CALL 0x00403c33
LAB_00550a4a:
00550A4A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_00550a4d:
00550A4D  25 FF 00 00 00            AND EAX,0xff
00550A52  8A 88 50 99 80 00         MOV CL,byte ptr [EAX + 0x809950]
00550A58  84 C9                     TEST CL,CL
00550A5A  0F 85 AB 00 00 00         JNZ 0x00550b0b
00550A60  33 C9                     XOR ECX,ECX
00550A62  33 C0                     XOR EAX,EAX
00550A64  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
00550A6A  85 C9                     TEST ECX,ECX
00550A6C  0F 86 99 00 00 00         JBE 0x00550b0b
00550A72  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00550A75  BA F0 8A 80 00            MOV EDX,0x808af0
LAB_00550a7a:
00550A7A  39 32                     CMP dword ptr [EDX],ESI
00550A7C  74 14                     JZ 0x00550a92
00550A7E  40                        INC EAX
00550A7F  81 C2 9C 00 00 00         ADD EDX,0x9c
00550A85  3B C1                     CMP EAX,ECX
00550A87  72 F1                     JC 0x00550a7a
00550A89  5F                        POP EDI
00550A8A  5E                        POP ESI
00550A8B  5B                        POP EBX
00550A8C  8B E5                     MOV ESP,EBP
00550A8E  5D                        POP EBP
00550A8F  C2 04 00                  RET 0x4
LAB_00550a92:
00550A92  8D 51 FF                  LEA EDX,[ECX + -0x1]
00550A95  3B C2                     CMP EAX,EDX
00550A97  74 35                     JZ 0x00550ace
00550A99  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00550A9C  2B C8                     SUB ECX,EAX
00550A9E  C1 E2 03                  SHL EDX,0x3
00550AA1  2B D0                     SUB EDX,EAX
00550AA3  C1 E2 02                  SHL EDX,0x2
00550AA6  49                        DEC ECX
00550AA7  8B C1                     MOV EAX,ECX
00550AA9  8D B2 4C 8B 80 00         LEA ESI,[EDX + 0x808b4c]
00550AAF  8D BA B0 8A 80 00         LEA EDI,[EDX + 0x808ab0]
00550AB5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
00550AB8  C1 E1 03                  SHL ECX,0x3
00550ABB  2B C8                     SUB ECX,EAX
00550ABD  C1 E1 02                  SHL ECX,0x2
00550AC0  8B C1                     MOV EAX,ECX
00550AC2  C1 E9 02                  SHR ECX,0x2
00550AC5  F3 A5                     MOVSD.REP ES:EDI,ESI
00550AC7  8B C8                     MOV ECX,EAX
00550AC9  83 E1 03                  AND ECX,0x3
00550ACC  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00550ace:
00550ACE  33 D2                     XOR EDX,EDX
00550AD0  B9 27 00 00 00            MOV ECX,0x27
00550AD5  8A 15 AF 8A 80 00         MOV DL,byte ptr [0x00808aaf]
00550ADB  33 C0                     XOR EAX,EAX
00550ADD  8D 34 92                  LEA ESI,[EDX + EDX*0x4]
00550AE0  C1 E6 03                  SHL ESI,0x3
00550AE3  2B F2                     SUB ESI,EDX
00550AE5  8D 3C B5 14 8A 80 00      LEA EDI,[ESI*0x4 + 0x808a14]
00550AEC  F3 AB                     STOSD.REP ES:EDI
00550AEE  8A 0D AF 8A 80 00         MOV CL,byte ptr [0x00808aaf]
00550AF4  FE C9                     DEC CL
00550AF6  88 0D AF 8A 80 00         MOV byte ptr [0x00808aaf],CL
00550AFC  8B 0D E4 16 80 00         MOV ECX,dword ptr [0x008016e4]
00550B02  85 C9                     TEST ECX,ECX
00550B04  74 05                     JZ 0x00550b0b
00550B06  E8 FC 52 EB FF            CALL 0x00405e07
LAB_00550b0b:
00550B0B  5F                        POP EDI
00550B0C  5E                        POP ESI
00550B0D  5B                        POP EBX
00550B0E  8B E5                     MOV ESP,EBP
00550B10  5D                        POP EBP
00550B11  C2 04 00                  RET 0x4
