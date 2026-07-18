FUN_00696310:
00696310  55                        PUSH EBP
00696311  8B EC                     MOV EBP,ESP
00696313  53                        PUSH EBX
00696314  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00696317  8B C3                     MOV EAX,EBX
00696319  56                        PUSH ESI
0069631A  57                        PUSH EDI
0069631B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0069631E  99                        CDQ
0069631F  F7 FF                     IDIV EDI
00696321  8B C3                     MOV EAX,EBX
00696323  8B F2                     MOV ESI,EDX
00696325  99                        CDQ
00696326  F7 FF                     IDIV EDI
00696328  85 F6                     TEST ESI,ESI
0069632A  75 1D                     JNZ 0x00696349
0069632C  85 C0                     TEST EAX,EAX
0069632E  75 04                     JNZ 0x00696334
00696330  33 D2                     XOR EDX,EDX
00696332  EB 5E                     JMP 0x00696392
LAB_00696334:
00696334  8B 91 33 58 00 00         MOV EDX,dword ptr [ECX + 0x5833]
0069633A  4A                        DEC EDX
0069633B  2B C2                     SUB EAX,EDX
0069633D  F7 D8                     NEG EAX
0069633F  1B C0                     SBB EAX,EAX
00696341  83 E0 04                  AND EAX,0x4
00696344  83 C0 03                  ADD EAX,0x3
00696347  EB 47                     JMP 0x00696390
LAB_00696349:
00696349  8B 91 33 58 00 00         MOV EDX,dword ptr [ECX + 0x5833]
0069634F  4A                        DEC EDX
00696350  3B F2                     CMP ESI,EDX
00696352  75 20                     JNZ 0x00696374
00696354  85 C0                     TEST EAX,EAX
00696356  75 07                     JNZ 0x0069635f
00696358  BA 01 00 00 00            MOV EDX,0x1
0069635D  EB 33                     JMP 0x00696392
LAB_0069635f:
0069635F  8B 91 37 58 00 00         MOV EDX,dword ptr [ECX + 0x5837]
00696365  4A                        DEC EDX
00696366  2B C2                     SUB EAX,EDX
00696368  F7 D8                     NEG EAX
0069636A  1B C0                     SBB EAX,EAX
0069636C  83 E0 03                  AND EAX,0x3
0069636F  83 C0 02                  ADD EAX,0x2
00696372  EB 1C                     JMP 0x00696390
LAB_00696374:
00696374  8B 91 37 58 00 00         MOV EDX,dword ptr [ECX + 0x5837]
0069637A  4A                        DEC EDX
0069637B  3B C2                     CMP EAX,EDX
0069637D  75 07                     JNZ 0x00696386
0069637F  BA 06 00 00 00            MOV EDX,0x6
00696384  EB 0C                     JMP 0x00696392
LAB_00696386:
00696386  F7 D8                     NEG EAX
00696388  1B C0                     SBB EAX,EAX
0069638A  83 E0 04                  AND EAX,0x4
0069638D  83 C0 04                  ADD EAX,0x4
LAB_00696390:
00696390  8B D0                     MOV EDX,EAX
LAB_00696392:
00696392  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00696395  33 C0                     XOR EAX,EAX
00696397  8A 82 7C D7 79 00         MOV AL,byte ptr [EDX + 0x79d77c]
0069639D  85 F6                     TEST ESI,ESI
0069639F  74 02                     JZ 0x006963a3
006963A1  89 16                     MOV dword ptr [ESI],EDX
LAB_006963a3:
006963A3  85 C0                     TEST EAX,EAX
006963A5  7E 1E                     JLE 0x006963c5
006963A7  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006963AA  C1 E2 05                  SHL EDX,0x5
006963AD  8D 8C 0A 0F 57 00 00      LEA ECX,[EDX + ECX*0x1 + 0x570f]
006963B4  8B D0                     MOV EDX,EAX
LAB_006963b6:
006963B6  8B 39                     MOV EDI,dword ptr [ECX]
006963B8  83 C1 04                  ADD ECX,0x4
006963BB  03 FB                     ADD EDI,EBX
006963BD  89 3E                     MOV dword ptr [ESI],EDI
006963BF  83 C6 04                  ADD ESI,0x4
006963C2  4A                        DEC EDX
006963C3  75 F1                     JNZ 0x006963b6
LAB_006963c5:
006963C5  5F                        POP EDI
006963C6  5E                        POP ESI
006963C7  5B                        POP EBX
006963C8  5D                        POP EBP
006963C9  C2 10 00                  RET 0x10
