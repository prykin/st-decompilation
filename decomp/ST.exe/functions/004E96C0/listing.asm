FUN_004e96c0:
004E96C0  55                        PUSH EBP
004E96C1  8B EC                     MOV EBP,ESP
004E96C3  56                        PUSH ESI
004E96C4  8B F1                     MOV ESI,ECX
004E96C6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E96C9  8B 86 D8 04 00 00         MOV EAX,dword ptr [ESI + 0x4d8]
004E96CF  3B C1                     CMP EAX,ECX
004E96D1  0F 85 CE 01 00 00         JNZ 0x004e98a5
004E96D7  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E96DD  85 C0                     TEST EAX,EAX
004E96DF  0F 84 C0 01 00 00         JZ 0x004e98a5
004E96E5  8B 8E EC 04 00 00         MOV ECX,dword ptr [ESI + 0x4ec]
004E96EB  8B 96 E8 04 00 00         MOV EDX,dword ptr [ESI + 0x4e8]
004E96F1  8B 86 E4 04 00 00         MOV EAX,dword ptr [ESI + 0x4e4]
004E96F7  51                        PUSH ECX
004E96F8  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004E96FE  52                        PUSH EDX
004E96FF  50                        PUSH EAX
004E9700  E8 CF 86 F1 FF            CALL 0x00401dd4
004E9705  8B 96 D8 04 00 00         MOV EDX,dword ptr [ESI + 0x4d8]
004E970B  8D 4D 08                  LEA ECX,[EBP + 0x8]
004E970E  C7 86 E0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4e0],0x0
004E9718  51                        PUSH ECX
004E9719  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E971F  52                        PUSH EDX
004E9720  E8 AB CB 1F 00            CALL 0x006e62d0
004E9725  85 C0                     TEST EAX,EAX
004E9727  0F 85 B6 00 00 00         JNZ 0x004e97e3
004E972D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E9730  8B 01                     MOV EAX,dword ptr [ECX]
004E9732  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E9735  83 F8 01                  CMP EAX,0x1
004E9738  7C 1E                     JL 0x004e9758
004E973A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E973D  8B 11                     MOV EDX,dword ptr [ECX]
004E973F  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E9742  83 F8 29                  CMP EAX,0x29
004E9745  7D 11                     JGE 0x004e9758
004E9747  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E974A  8B 01                     MOV EAX,dword ptr [ECX]
004E974C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E974F  8B 04 85 9C 0D 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e0d9c]
004E9756  EB 51                     JMP 0x004e97a9
LAB_004e9758:
004E9758  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E975B  8B 11                     MOV EDX,dword ptr [ECX]
004E975D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E9760  83 F8 32                  CMP EAX,0x32
004E9763  7C 3F                     JL 0x004e97a4
004E9765  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E9768  8B 01                     MOV EAX,dword ptr [ECX]
004E976A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E976D  83 F8 74                  CMP EAX,0x74
004E9770  7D 32                     JGE 0x004e97a4
004E9772  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E9775  53                        PUSH EBX
004E9776  8A 51 24                  MOV DL,byte ptr [ECX + 0x24]
004E9779  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E977F  52                        PUSH EDX
004E9780  E8 32 B2 F1 FF            CALL 0x004049b7
004E9785  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E9788  8A D8                     MOV BL,AL
004E978A  81 E3 FF 00 00 00         AND EBX,0xff
004E9790  8B 01                     MOV EAX,dword ptr [ECX]
004E9792  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E9795  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004E9798  03 D9                     ADD EBX,ECX
004E979A  8B 04 9D B0 37 7E 00      MOV EAX,dword ptr [EBX*0x4 + 0x7e37b0]
004E97A1  5B                        POP EBX
004E97A2  EB 05                     JMP 0x004e97a9
LAB_004e97a4:
004E97A4  B8 64 00 00 00            MOV EAX,0x64
LAB_004e97a9:
004E97A9  8B C8                     MOV ECX,EAX
004E97AB  F7 D9                     NEG ECX
004E97AD  C1 E1 02                  SHL ECX,0x2
004E97B0  2B C8                     SUB ECX,EAX
004E97B2  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004E97B7  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004E97BA  C1 E1 02                  SHL ECX,0x2
004E97BD  F7 E9                     IMUL ECX
004E97BF  C1 FA 05                  SAR EDX,0x5
004E97C2  8B C2                     MOV EAX,EDX
004E97C4  C1 E8 1F                  SHR EAX,0x1f
004E97C7  03 D0                     ADD EDX,EAX
004E97C9  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004E97CF  03 C2                     ADD EAX,EDX
004E97D1  89 86 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EAX
004E97D7  79 0A                     JNS 0x004e97e3
004E97D9  C7 86 D0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d0],0x0
LAB_004e97e3:
004E97E3  8B 86 F0 04 00 00         MOV EAX,dword ptr [ESI + 0x4f0]
004E97E9  85 C0                     TEST EAX,EAX
004E97EB  0F 84 89 00 00 00         JZ 0x004e987a
004E97F1  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004E97F7  85 C9                     TEST ECX,ECX
004E97F9  74 20                     JZ 0x004e981b
004E97FB  8B 96 DC 04 00 00         MOV EDX,dword ptr [ESI + 0x4dc]
004E9801  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E9804  52                        PUSH EDX
004E9805  8B 96 B4 05 00 00         MOV EDX,dword ptr [ESI + 0x5b4]
004E980B  50                        PUSH EAX
004E980C  8B 86 B0 05 00 00         MOV EAX,dword ptr [ESI + 0x5b0]
004E9812  52                        PUSH EDX
004E9813  50                        PUSH EAX
004E9814  E8 01 9A F1 FF            CALL 0x0040321a
004E9819  EB 5F                     JMP 0x004e987a
LAB_004e981b:
004E981B  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
004E981E  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E9821  33 D2                     XOR EDX,EDX
004E9823  8A 91 2D 11 00 00         MOV DL,byte ptr [ECX + 0x112d]
004E9829  3B C2                     CMP EAX,EDX
004E982B  75 4D                     JNZ 0x004e987a
004E982D  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004E9833  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E9839  50                        PUSH EAX
004E983A  E8 78 B1 F1 FF            CALL 0x004049b7
004E983F  25 FF 00 00 00            AND EAX,0xff
004E9844  48                        DEC EAX
004E9845  74 22                     JZ 0x004e9869
004E9847  48                        DEC EAX
004E9848  74 0C                     JZ 0x004e9856
004E984A  48                        DEC EAX
004E984B  75 2D                     JNZ 0x004e987a
004E984D  8B 16                     MOV EDX,dword ptr [ESI]
004E984F  68 05 04 00 00            PUSH 0x405
004E9854  EB 1A                     JMP 0x004e9870
LAB_004e9856:
004E9856  8B 06                     MOV EAX,dword ptr [ESI]
004E9858  68 DE 02 00 00            PUSH 0x2de
004E985D  6A 04                     PUSH 0x4
004E985F  8B CE                     MOV ECX,ESI
004E9861  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004E9867  EB 11                     JMP 0x004e987a
LAB_004e9869:
004E9869  8B 16                     MOV EDX,dword ptr [ESI]
004E986B  68 18 02 00 00            PUSH 0x218
LAB_004e9870:
004E9870  6A 04                     PUSH 0x4
004E9872  8B CE                     MOV ECX,ESI
004E9874  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
FUN_004e96c0::cf_common_exit_004E987A:
004E987A  8B 86 DC 04 00 00         MOV EAX,dword ptr [ESI + 0x4dc]
004E9880  8B 8E EC 04 00 00         MOV ECX,dword ptr [ESI + 0x4ec]
004E9886  8B 96 E8 04 00 00         MOV EDX,dword ptr [ESI + 0x4e8]
004E988C  50                        PUSH EAX
004E988D  8B 86 E4 04 00 00         MOV EAX,dword ptr [ESI + 0x4e4]
004E9893  51                        PUSH ECX
004E9894  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E9897  52                        PUSH EDX
004E9898  50                        PUSH EAX
004E9899  51                        PUSH ECX
004E989A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E98A0  E8 32 91 F1 FF            CALL 0x004029d7
LAB_004e98a5:
004E98A5  33 C0                     XOR EAX,EAX
004E98A7  5E                        POP ESI
004E98A8  5D                        POP EBP
004E98A9  C2 04 00                  RET 0x4
