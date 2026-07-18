LAB_0072e550:
0072E550  8D 42 FF                  LEA EAX,[EDX + -0x1]
0072E553  5B                        POP EBX
0072E554  C3                        RET
FUN_00730590:
00730590  8B 4C 24 08               MOV ECX,dword ptr [ESP + 0x8]
00730594  57                        PUSH EDI
00730595  53                        PUSH EBX
00730596  56                        PUSH ESI
00730597  8A 11                     MOV DL,byte ptr [ECX]
00730599  8B 7C 24 10               MOV EDI,dword ptr [ESP + 0x10]
0073059D  84 D2                     TEST DL,DL
0073059F  74 69                     JZ 0x0073060a
007305A1  8A 71 01                  MOV DH,byte ptr [ECX + 0x1]
007305A4  84 F6                     TEST DH,DH
007305A6  74 4F                     JZ 0x007305f7
LAB_007305a8:
007305A8  8B F7                     MOV ESI,EDI
007305AA  8B 4C 24 14               MOV ECX,dword ptr [ESP + 0x14]
007305AE  8A 07                     MOV AL,byte ptr [EDI]
007305B0  46                        INC ESI
007305B1  38 D0                     CMP AL,DL
007305B3  74 15                     JZ 0x007305ca
007305B5  84 C0                     TEST AL,AL
007305B7  74 0B                     JZ 0x007305c4
LAB_007305b9:
007305B9  8A 06                     MOV AL,byte ptr [ESI]
007305BB  46                        INC ESI
LAB_007305bc:
007305BC  38 D0                     CMP AL,DL
007305BE  74 0A                     JZ 0x007305ca
007305C0  84 C0                     TEST AL,AL
007305C2  75 F5                     JNZ 0x007305b9
LAB_007305c4:
007305C4  5E                        POP ESI
007305C5  5B                        POP EBX
007305C6  5F                        POP EDI
007305C7  33 C0                     XOR EAX,EAX
007305C9  C3                        RET
LAB_007305ca:
007305CA  8A 06                     MOV AL,byte ptr [ESI]
007305CC  46                        INC ESI
007305CD  38 F0                     CMP AL,DH
007305CF  75 EB                     JNZ 0x007305bc
007305D1  8D 7E FF                  LEA EDI,[ESI + -0x1]
LAB_007305d4:
007305D4  8A 61 02                  MOV AH,byte ptr [ECX + 0x2]
007305D7  84 E4                     TEST AH,AH
007305D9  74 28                     JZ 0x00730603
007305DB  8A 06                     MOV AL,byte ptr [ESI]
007305DD  83 C6 02                  ADD ESI,0x2
007305E0  38 E0                     CMP AL,AH
007305E2  75 C4                     JNZ 0x007305a8
007305E4  8A 41 03                  MOV AL,byte ptr [ECX + 0x3]
007305E7  84 C0                     TEST AL,AL
007305E9  74 18                     JZ 0x00730603
007305EB  8A 66 FF                  MOV AH,byte ptr [ESI + -0x1]
007305EE  83 C1 02                  ADD ECX,0x2
007305F1  38 E0                     CMP AL,AH
007305F3  74 DF                     JZ 0x007305d4
007305F5  EB B1                     JMP 0x007305a8
LAB_007305f7:
007305F7  33 C0                     XOR EAX,EAX
007305F9  5E                        POP ESI
007305FA  5B                        POP EBX
007305FB  5F                        POP EDI
007305FC  8A C2                     MOV AL,DL
007305FE  E9 63 DF FF FF            JMP 0x0072e566
LAB_00730603:
00730603  8D 47 FF                  LEA EAX,[EDI + -0x1]
00730606  5E                        POP ESI
00730607  5B                        POP EBX
00730608  5F                        POP EDI
00730609  C3                        RET
LAB_0073060a:
0073060A  8B C7                     MOV EAX,EDI
0073060C  5E                        POP ESI
0073060D  5B                        POP EBX
0073060E  5F                        POP EDI
0073060F  C3                        RET
