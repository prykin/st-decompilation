FUN_00721790:
00721790  56                        PUSH ESI
00721791  8B F1                     MOV ESI,ECX
00721793  33 D2                     XOR EDX,EDX
00721795  57                        PUSH EDI
00721796  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
0072179C  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
LAB_0072179f:
0072179F  8B 86 38 01 00 00         MOV EAX,dword ptr [ESI + 0x138]
007217A5  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
007217A8  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
007217AB  3B CF                     CMP ECX,EDI
007217AD  7D 1F                     JGE 0x007217ce
007217AF  8B 78 14                  MOV EDI,dword ptr [EAX + 0x14]
007217B2  41                        INC ECX
007217B3  8B 7C 8F FC               MOV EDI,dword ptr [EDI + ECX*0x4 + -0x4]
007217B7  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
007217BA  85 FF                     TEST EDI,EDI
007217BC  74 10                     JZ 0x007217ce
007217BE  83 C9 FF                  OR ECX,0xffffffff
007217C1  33 C0                     XOR EAX,EAX
007217C3  F2 AE                     SCASB.REPNE ES:EDI
007217C5  F7 D1                     NOT ECX
007217C7  49                        DEC ECX
007217C8  8D 54 0A 01               LEA EDX,[EDX + ECX*0x1 + 0x1]
007217CC  EB D1                     JMP 0x0072179f
LAB_007217ce:
007217CE  5F                        POP EDI
007217CF  8B C2                     MOV EAX,EDX
007217D1  5E                        POP ESI
007217D2  C3                        RET
