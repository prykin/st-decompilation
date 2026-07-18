FUN_006bb8b0:
006BB8B0  55                        PUSH EBP
006BB8B1  8B EC                     MOV EBP,ESP
006BB8B3  56                        PUSH ESI
006BB8B4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BB8B7  57                        PUSH EDI
006BB8B8  33 FF                     XOR EDI,EDI
006BB8BA  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BB8BD  89 BE 74 04 00 00         MOV dword ptr [ESI + 0x474],EDI
006BB8C3  25 00 11 00 00            AND EAX,0x1100
006BB8C8  3D 00 01 00 00            CMP EAX,0x100
006BB8CD  75 0B                     JNZ 0x006bb8da
006BB8CF  5F                        POP EDI
006BB8D0  B8 AE 01 76 88            MOV EAX,0x887601ae
006BB8D5  5E                        POP ESI
006BB8D6  5D                        POP EBP
006BB8D7  C2 04 00                  RET 0x4
LAB_006bb8da:
006BB8DA  39 7E 40                  CMP dword ptr [ESI + 0x40],EDI
006BB8DD  75 0B                     JNZ 0x006bb8ea
006BB8DF  5F                        POP EDI
006BB8E0  B8 AE 01 76 88            MOV EAX,0x887601ae
006BB8E5  5E                        POP ESI
006BB8E6  5D                        POP EBP
006BB8E7  C2 04 00                  RET 0x4
LAB_006bb8ea:
006BB8EA  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006BB8F1  74 0D                     JZ 0x006bb900
006BB8F3  8D 8E F0 04 00 00         LEA ECX,[ESI + 0x4f0]
006BB8F9  51                        PUSH ECX
006BB8FA  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006bb900:
006BB900  53                        PUSH EBX
006BB901  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
006BB904  8D 9E 78 04 00 00         LEA EBX,[ESI + 0x478]
LAB_006bb90a:
006BB90A  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
006BB90D  6A 00                     PUSH 0x0
006BB90F  8D 86 74 04 00 00         LEA EAX,[ESI + 0x474]
006BB915  53                        PUSH EBX
006BB916  50                        PUSH EAX
006BB917  52                        PUSH EDX
006BB918  E8 23 05 00 00            CALL 0x006bbe40
006BB91D  8B F8                     MOV EDI,EAX
006BB91F  85 FF                     TEST EDI,EDI
006BB921  74 47                     JZ 0x006bb96a
006BB923  81 FF C2 01 76 88         CMP EDI,0x887601c2
006BB929  75 14                     JNZ 0x006bb93f
006BB92B  56                        PUSH ESI
006BB92C  E8 0F 33 01 00            CALL 0x006cec40
006BB931  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BB934  40                        INC EAX
006BB935  83 F8 02                  CMP EAX,0x2
006BB938  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006BB93B  7C CD                     JL 0x006bb90a
006BB93D  EB 04                     JMP 0x006bb943
LAB_006bb93f:
006BB93F  85 FF                     TEST EDI,EDI
006BB941  74 27                     JZ 0x006bb96a
LAB_006bb943:
006BB943  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006BB946  C7 86 74 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x474],0x0
006BB950  A9 00 00 00 04            TEST EAX,0x4000000
006BB955  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
006BB95B  74 0D                     JZ 0x006bb96a
006BB95D  81 C6 F0 04 00 00         ADD ESI,0x4f0
006BB963  56                        PUSH ESI
006BB964  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006bb96a:
006BB96A  8B C7                     MOV EAX,EDI
006BB96C  5B                        POP EBX
006BB96D  5F                        POP EDI
006BB96E  5E                        POP ESI
006BB96F  5D                        POP EBP
006BB970  C2 04 00                  RET 0x4
