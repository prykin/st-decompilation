TraksClassTy::PrepareAfterSave:
00556170  55                        PUSH EBP
00556171  8B EC                     MOV EBP,ESP
00556173  83 EC 50                  SUB ESP,0x50
00556176  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055617B  53                        PUSH EBX
0055617C  56                        PUSH ESI
0055617D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00556180  57                        PUSH EDI
00556181  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00556184  8D 4D B0                  LEA ECX,[EBP + -0x50]
00556187  6A 00                     PUSH 0x0
00556189  52                        PUSH EDX
0055618A  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00556191  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00556194  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0055619A  E8 51 76 1D 00            CALL 0x0072d7f0
0055619F  8B F0                     MOV ESI,EAX
005561A1  83 C4 08                  ADD ESP,0x8
005561A4  85 F6                     TEST ESI,ESI
005561A6  0F 85 0F 02 00 00         JNZ 0x005563bb
005561AC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005561AF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
005561B2  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
005561B5  89 4B 1C                  MOV dword ptr [EBX + 0x1c],ECX
005561B8  8A 48 1C                  MOV CL,byte ptr [EAX + 0x1c]
005561BB  84 C9                     TEST CL,CL
005561BD  0F 84 D6 01 00 00         JZ 0x00556399
005561C3  83 C0 5C                  ADD EAX,0x5c
005561C6  50                        PUSH EAX
005561C7  56                        PUSH ESI
005561C8  E8 93 9E 15 00            CALL 0x006b0060
005561CD  89 43 24                  MOV dword ptr [EBX + 0x24],EAX
005561D0  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
LAB_005561d3:
005561D3  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
005561D6  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005561D9  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
005561DC  3B CA                     CMP ECX,EDX
005561DE  73 11                     JNC 0x005561f1
005561E0  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005561E3  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005561E6  0F AF F1                  IMUL ESI,ECX
005561E9  03 F2                     ADD ESI,EDX
005561EB  41                        INC ECX
005561EC  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
005561EF  EB 02                     JMP 0x005561f3
LAB_005561f1:
005561F1  33 F6                     XOR ESI,ESI
LAB_005561f3:
005561F3  85 F6                     TEST ESI,ESI
005561F5  0F 84 AE 01 00 00         JZ 0x005563a9
005561FB  0F BF 06                  MOVSX EAX,word ptr [ESI]
005561FE  8B 3D 64 67 80 00         MOV EDI,dword ptr [0x00806764]
00556204  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
00556207  83 3C D5 0C 90 7C 00 01   CMP dword ptr [EDX*0x8 + 0x7c900c],0x1
0055620F  74 06                     JZ 0x00556217
00556211  8B 3D 74 67 80 00         MOV EDI,dword ptr [0x00806774]
LAB_00556217:
00556217  6A 00                     PUSH 0x0
00556219  6A 00                     PUSH 0x0
0055621B  6A 01                     PUSH 0x1
0055621D  6A 00                     PUSH 0x0
0055621F  6A FF                     PUSH -0x1
00556221  50                        PUSH EAX
00556222  E8 97 EA EA FF            CALL 0x00404cbe
00556227  83 C4 04                  ADD ESP,0x4
0055622A  50                        PUSH EAX
0055622B  6A 1D                     PUSH 0x1d
0055622D  57                        PUSH EDI
0055622E  E8 BD 38 1B 00            CALL 0x00709af0
00556233  8B F8                     MOV EDI,EAX
00556235  83 C4 20                  ADD ESP,0x20
00556238  66 8B 07                  MOV AX,word ptr [EDI]
0055623B  6A 00                     PUSH 0x0
0055623D  66 89 46 36               MOV word ptr [ESI + 0x36],AX
00556241  0F BF 06                  MOVSX EAX,word ptr [ESI]
00556244  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00556247  C1 E0 03                  SHL EAX,0x3
0055624A  8B 88 FC 8F 7C 00         MOV ECX,dword ptr [EAX + 0x7c8ffc]
00556250  8B 90 F8 8F 7C 00         MOV EDX,dword ptr [EAX + 0x7c8ff8]
00556256  51                        PUSH ECX
00556257  8B 88 04 90 7C 00         MOV ECX,dword ptr [EAX + 0x7c9004]
0055625D  52                        PUSH EDX
0055625E  8B 90 00 90 7C 00         MOV EDX,dword ptr [EAX + 0x7c9000]
00556264  51                        PUSH ECX
00556265  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0055626B  52                        PUSH EDX
0055626C  6A 00                     PUSH 0x0
0055626E  8D 45 FC                  LEA EAX,[EBP + -0x4]
00556271  6A 01                     PUSH 0x1
00556273  50                        PUSH EAX
00556274  E8 E7 23 19 00            CALL 0x006e8660
00556279  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055627C  6A 01                     PUSH 0x1
0055627E  89 4E 32                  MOV dword ptr [ESI + 0x32],ECX
00556281  8B 57 21                  MOV EDX,dword ptr [EDI + 0x21]
00556284  0F BF 46 36               MOVSX EAX,word ptr [ESI + 0x36]
00556288  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0055628B  52                        PUSH EDX
0055628C  50                        PUSH EAX
0055628D  6A 00                     PUSH 0x0
0055628F  51                        PUSH ECX
00556290  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00556296  E8 45 36 19 00            CALL 0x006e98e0
0055629B  0F BF 56 22               MOVSX EDX,word ptr [ESI + 0x22]
0055629F  8B 46 32                  MOV EAX,dword ptr [ESI + 0x32]
005562A2  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005562A8  52                        PUSH EDX
005562A9  6A 00                     PUSH 0x0
005562AB  50                        PUSH EAX
005562AC  E8 BF 3F 19 00            CALL 0x006ea270
005562B1  8B 46 16                  MOV EAX,dword ptr [ESI + 0x16]
005562B4  85 C0                     TEST EAX,EAX
005562B6  7C 30                     JL 0x005562e8
005562B8  0F BF 4E 1A               MOVSX ECX,word ptr [ESI + 0x1a]
005562BC  83 F9 FF                  CMP ECX,-0x1
005562BF  74 17                     JZ 0x005562d8
005562C1  83 F9 01                  CMP ECX,0x1
005562C4  75 22                     JNZ 0x005562e8
005562C6  8B 4E 32                  MOV ECX,dword ptr [ESI + 0x32]
005562C9  50                        PUSH EAX
005562CA  51                        PUSH ECX
005562CB  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005562D1  E8 8A 41 19 00            CALL 0x006ea460
005562D6  EB 10                     JMP 0x005562e8
LAB_005562d8:
005562D8  8B 56 32                  MOV EDX,dword ptr [ESI + 0x32]
005562DB  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005562E1  50                        PUSH EAX
005562E2  52                        PUSH EDX
005562E3  E8 F8 40 19 00            CALL 0x006ea3e0
LAB_005562e8:
005562E8  0F BF 06                  MOVSX EAX,word ptr [ESI]
005562EB  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
005562EE  C1 E1 03                  SHL ECX,0x3
005562F1  8B 81 04 90 7C 00         MOV EAX,dword ptr [ECX + 0x7c9004]
005562F7  99                        CDQ
005562F8  2B C2                     SUB EAX,EDX
005562FA  D1 F8                     SAR EAX,0x1
005562FC  50                        PUSH EAX
005562FD  8B 81 00 90 7C 00         MOV EAX,dword ptr [ECX + 0x7c9000]
00556303  99                        CDQ
00556304  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0055630A  2B C2                     SUB EAX,EDX
0055630C  D1 F8                     SAR EAX,0x1
0055630E  50                        PUSH EAX
0055630F  8B 46 32                  MOV EAX,dword ptr [ESI + 0x32]
00556312  6A 01                     PUSH 0x1
00556314  50                        PUSH EAX
00556315  E8 C6 41 19 00            CALL 0x006ea4e0
0055631A  0F BF 4E 06               MOVSX ECX,word ptr [ESI + 0x6]
0055631E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00556321  51                        PUSH ECX
00556322  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00556325  0F BF 56 04               MOVSX EDX,word ptr [ESI + 0x4]
00556329  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0055632F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00556332  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
00556336  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0055633C  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00556342  D9 1C 24                  FSTP float ptr [ESP]
00556345  DB 45 F4                  FILD dword ptr [EBP + -0xc]
00556348  51                        PUSH ECX
00556349  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0055634C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00556352  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00556358  D9 1C 24                  FSTP float ptr [ESP]
0055635B  DB 45 F4                  FILD dword ptr [EBP + -0xc]
0055635E  51                        PUSH ECX
0055635F  8B 4E 32                  MOV ECX,dword ptr [ESI + 0x32]
00556362  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00556368  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0055636E  D9 1C 24                  FSTP float ptr [ESP]
00556371  51                        PUSH ECX
00556372  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00556378  E8 E3 45 19 00            CALL 0x006ea960
0055637D  8B 56 32                  MOV EDX,dword ptr [ESI + 0x32]
00556380  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00556386  6A 00                     PUSH 0x0
00556388  52                        PUSH EDX
00556389  E8 12 47 19 00            CALL 0x006eaaa0
0055638E  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
00556391  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
00556394  E9 3A FE FF FF            JMP 0x005561d3
LAB_00556399:
00556399  6A 32                     PUSH 0x32
0055639B  6A 3C                     PUSH 0x3c
0055639D  6A 32                     PUSH 0x32
0055639F  6A 00                     PUSH 0x0
005563A1  E8 EA 7E 15 00            CALL 0x006ae290
005563A6  89 43 24                  MOV dword ptr [EBX + 0x24],EAX
LAB_005563a9:
005563A9  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005563AC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005563B2  5F                        POP EDI
005563B3  5E                        POP ESI
005563B4  5B                        POP EBX
005563B5  8B E5                     MOV ESP,EBP
005563B7  5D                        POP EBP
005563B8  C2 04 00                  RET 0x4
LAB_005563bb:
005563BB  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005563BE  68 D0 91 7C 00            PUSH 0x7c91d0
005563C3  68 CC 4C 7A 00            PUSH 0x7a4ccc
005563C8  56                        PUSH ESI
005563C9  6A 00                     PUSH 0x0
005563CB  68 1B 01 00 00            PUSH 0x11b
005563D0  68 04 91 7C 00            PUSH 0x7c9104
005563D5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005563DB  E8 F0 70 15 00            CALL 0x006ad4d0
005563E0  83 C4 18                  ADD ESP,0x18
005563E3  85 C0                     TEST EAX,EAX
005563E5  74 01                     JZ 0x005563e8
005563E7  CC                        INT3
LAB_005563e8:
005563E8  68 1C 01 00 00            PUSH 0x11c
005563ED  68 04 91 7C 00            PUSH 0x7c9104
005563F2  6A 00                     PUSH 0x0
005563F4  56                        PUSH ESI
005563F5  E8 46 FA 14 00            CALL 0x006a5e40
005563FA  5F                        POP EDI
005563FB  5E                        POP ESI
005563FC  5B                        POP EBX
005563FD  8B E5                     MOV ESP,EBP
005563FF  5D                        POP EBP
00556400  C2 04 00                  RET 0x4
