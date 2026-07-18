FUN_00742790:
00742790  55                        PUSH EBP
00742791  8B EC                     MOV EBP,ESP
00742793  81 EC A8 00 00 00         SUB ESP,0xa8
00742799  83 7D 08 01               CMP dword ptr [EBP + 0x8],0x1
0074279D  0F 85 56 01 00 00         JNZ 0x007428f9
007427A3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007427A6  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
007427AC  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
007427B2  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
007427B5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
007427BC  C7 85 6C FF FF FF 80 00 00 00  MOV dword ptr [EBP + 0xffffff6c],0x80
007427C6  6A 00                     PUSH 0x0
007427C8  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
007427CE  52                        PUSH EDX
007427CF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007427D2  50                        PUSH EAX
007427D3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007427D6  51                        PUSH ECX
007427D7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007427DA  52                        PUSH EDX
007427DB  E8 B0 30 00 00            CALL 0x00745890
007427E0  83 C4 14                  ADD ESP,0x14
007427E3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007427E6  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
007427EA  0F 85 8F 00 00 00         JNZ 0x0074287f
007427F0  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
007427F6  83 F8 7A                  CMP EAX,0x7a
007427F9  74 05                     JZ 0x00742800
007427FB  E9 DD 00 00 00            JMP 0x007428dd
LAB_00742800:
00742800  6A 00                     PUSH 0x0
00742802  6A 00                     PUSH 0x0
00742804  6A 00                     PUSH 0x0
00742806  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00742809  50                        PUSH EAX
0074280A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0074280D  51                        PUSH ECX
0074280E  E8 7D 30 00 00            CALL 0x00745890
00742813  83 C4 14                  ADD ESP,0x14
00742816  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
0074281C  83 BD 6C FF FF FF 00      CMP dword ptr [EBP + 0xffffff6c],0x0
00742823  75 05                     JNZ 0x0074282a
00742825  E9 B3 00 00 00            JMP 0x007428dd
LAB_0074282a:
0074282A  6A 58                     PUSH 0x58
0074282C  68 88 0F 7A 00            PUSH 0x7a0f88
00742831  6A 02                     PUSH 0x2
00742833  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
00742839  52                        PUSH EDX
0074283A  E8 C5 E8 CB FF            CALL 0x00401104
0074283F  83 C4 10                  ADD ESP,0x10
00742842  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00742845  83 7D F4 00               CMP dword ptr [EBP + -0xc],0x0
00742849  75 05                     JNZ 0x00742850
0074284B  E9 8D 00 00 00            JMP 0x007428dd
LAB_00742850:
00742850  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00742857  6A 00                     PUSH 0x0
00742859  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
0074285F  50                        PUSH EAX
00742860  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00742863  51                        PUSH ECX
00742864  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00742867  52                        PUSH EDX
00742868  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0074286B  50                        PUSH EAX
0074286C  E8 1F 30 00 00            CALL 0x00745890
00742871  83 C4 14                  ADD ESP,0x14
00742874  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00742877  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0074287B  75 02                     JNZ 0x0074287f
0074287D  EB 5E                     JMP 0x007428dd
LAB_0074287f:
0074287F  6A 63                     PUSH 0x63
00742881  68 88 0F 7A 00            PUSH 0x7a0f88
00742886  6A 02                     PUSH 0x2
00742888  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0074288B  51                        PUSH ECX
0074288C  E8 73 E8 CB FF            CALL 0x00401104
00742891  83 C4 10                  ADD ESP,0x10
00742894  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
0074289A  89 02                     MOV dword ptr [EDX],EAX
0074289C  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
007428A2  83 38 00                  CMP dword ptr [EAX],0x0
007428A5  75 02                     JNZ 0x007428a9
007428A7  EB 34                     JMP 0x007428dd
LAB_007428a9:
007428A9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007428AC  51                        PUSH ECX
007428AD  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007428B0  52                        PUSH EDX
007428B1  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
007428B7  8B 08                     MOV ECX,dword ptr [EAX]
007428B9  51                        PUSH ECX
007428BA  E8 81 BA FE FF            CALL 0x0072e340
007428BF  83 C4 0C                  ADD ESP,0xc
007428C2  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
007428C6  74 0E                     JZ 0x007428d6
007428C8  6A 02                     PUSH 0x2
007428CA  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007428CD  52                        PUSH EDX
007428CE  E8 39 1C CC FF            CALL 0x0040450c
007428D3  83 C4 08                  ADD ESP,0x8
LAB_007428d6:
007428D6  33 C0                     XOR EAX,EAX
007428D8  E9 39 01 00 00            JMP 0x00742a16
LAB_007428dd:
007428DD  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
007428E1  74 0E                     JZ 0x007428f1
007428E3  6A 02                     PUSH 0x2
007428E5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007428E8  50                        PUSH EAX
007428E9  E8 1E 1C CC FF            CALL 0x0040450c
007428EE  83 C4 08                  ADD ESP,0x8
LAB_007428f1:
007428F1  83 C8 FF                  OR EAX,0xffffffff
007428F4  E9 1D 01 00 00            JMP 0x00742a16
LAB_007428f9:
007428F9  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
007428FD  0F 85 10 01 00 00         JNZ 0x00742a13
00742903  C7 85 5C FF FF FF 04 00 00 00  MOV dword ptr [EBP + 0xffffff5c],0x4
0074290D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00742910  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
00742916  6A 00                     PUSH 0x0
00742918  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
0074291E  52                        PUSH EDX
0074291F  68 20 74 85 00            PUSH 0x857420
00742924  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00742927  50                        PUSH EAX
00742928  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0074292B  51                        PUSH ECX
0074292C  E8 BF 2D 00 00            CALL 0x007456f0
00742931  83 C4 14                  ADD ESP,0x14
00742934  85 C0                     TEST EAX,EAX
00742936  75 08                     JNZ 0x00742940
00742938  83 C8 FF                  OR EAX,0xffffffff
0074293B  E9 D6 00 00 00            JMP 0x00742a16
LAB_00742940:
00742940  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
00742946  C6 02 00                  MOV byte ptr [EDX],0x0
00742949  C7 85 60 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff60],0x0
00742953  EB 0F                     JMP 0x00742964
LAB_00742955:
00742955  8B 85 60 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff60]
0074295B  83 C0 01                  ADD EAX,0x1
0074295E  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
LAB_00742964:
00742964  83 BD 60 FF FF FF 04      CMP dword ptr [EBP + 0xffffff60],0x4
0074296B  0F 8D 9E 00 00 00         JGE 0x00742a0f
00742971  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
00742978  7E 31                     JLE 0x007429ab
0074297A  6A 04                     PUSH 0x4
0074297C  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00742982  8A 14 4D 20 74 85 00      MOV DL,byte ptr [ECX*0x2 + 0x857420]
00742989  88 95 68 FF FF FF         MOV byte ptr [EBP + 0xffffff68],DL
0074298F  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00742995  25 FF 00 00 00            AND EAX,0xff
0074299A  50                        PUSH EAX
0074299B  E8 70 DC FE FF            CALL 0x00730610
007429A0  83 C4 08                  ADD ESP,0x8
007429A3  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
007429A9  EB 33                     JMP 0x007429de
LAB_007429ab:
007429AB  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
007429B1  8A 14 4D 20 74 85 00      MOV DL,byte ptr [ECX*0x2 + 0x857420]
007429B8  88 95 68 FF FF FF         MOV byte ptr [EBP + 0xffffff68],DL
007429BE  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
007429C4  25 FF 00 00 00            AND EAX,0xff
007429C9  8B 0D 80 12 7F 00         MOV ECX,dword ptr [0x007f1280]
007429CF  33 D2                     XOR EDX,EDX
007429D1  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
007429D5  83 E2 04                  AND EDX,0x4
007429D8  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
LAB_007429de:
007429DE  83 BD 58 FF FF FF 00      CMP dword ptr [EBP + 0xffffff58],0x0
007429E5  74 21                     JZ 0x00742a08
007429E7  8B 85 64 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff64]
007429ED  0F BE 08                  MOVSX ECX,byte ptr [EAX]
007429F0  6B C9 0A                  IMUL ECX,ECX,0xa
007429F3  0F BE 95 68 FF FF FF      MOVSX EDX,byte ptr [EBP + 0xffffff68]
007429FA  8D 44 11 D0               LEA EAX,[ECX + EDX*0x1 + -0x30]
007429FE  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00742A04  88 01                     MOV byte ptr [ECX],AL
00742A06  EB 02                     JMP 0x00742a0a
LAB_00742a08:
00742A08  EB 05                     JMP 0x00742a0f
LAB_00742a0a:
00742A0A  E9 46 FF FF FF            JMP 0x00742955
LAB_00742a0f:
00742A0F  33 C0                     XOR EAX,EAX
00742A11  EB 03                     JMP 0x00742a16
LAB_00742a13:
00742A13  83 C8 FF                  OR EAX,0xffffffff
LAB_00742a16:
00742A16  8B E5                     MOV ESP,EBP
00742A18  5D                        POP EBP
00742A19  C3                        RET
