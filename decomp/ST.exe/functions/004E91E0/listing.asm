FUN_004e91e0:
004E91E0  55                        PUSH EBP
004E91E1  8B EC                     MOV EBP,ESP
004E91E3  83 EC 10                  SUB ESP,0x10
004E91E6  53                        PUSH EBX
004E91E7  56                        PUSH ESI
004E91E8  8B F1                     MOV ESI,ECX
004E91EA  57                        PUSH EDI
004E91EB  83 BE AC 05 00 00 6C      CMP dword ptr [ESI + 0x5ac],0x6c
004E91F2  75 51                     JNZ 0x004e9245
004E91F4  E8 67 AF F1 FF            CALL 0x00404160
004E91F9  85 C0                     TEST EAX,EAX
004E91FB  74 3E                     JZ 0x004e923b
004E91FD  8B 86 1B 06 00 00         MOV EAX,dword ptr [ESI + 0x61b]
004E9203  85 C0                     TEST EAX,EAX
004E9205  74 34                     JZ 0x004e923b
004E9207  81 78 20 E8 03 00 00      CMP dword ptr [EAX + 0x20],0x3e8
004E920E  75 2B                     JNZ 0x004e923b
004E9210  81 B8 D8 04 00 00 FF FF 00 00  CMP dword ptr [EAX + 0x4d8],0xffff
004E921A  75 1F                     JNZ 0x004e923b
004E921C  0F BF 0D 44 B2 7F 00      MOVSX ECX,word ptr [0x007fb244]
004E9223  8B 90 B8 05 00 00         MOV EDX,dword ptr [EAX + 0x5b8]
004E9229  49                        DEC ECX
004E922A  3B D1                     CMP EDX,ECX
004E922C  7D 0D                     JGE 0x004e923b
004E922E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E9231  B8 01 00 00 00            MOV EAX,0x1
004E9236  E9 B5 00 00 00            JMP 0x004e92f0
LAB_004e923b:
004E923B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E923E  33 C0                     XOR EAX,EAX
004E9240  E9 AB 00 00 00            JMP 0x004e92f0
LAB_004e9245:
004E9245  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E9248  8B CF                     MOV ECX,EDI
004E924A  8B 17                     MOV EDX,dword ptr [EDI]
004E924C  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E924F  83 F8 01                  CMP EAX,0x1
004E9252  7C 1C                     JL 0x004e9270
004E9254  8B 07                     MOV EAX,dword ptr [EDI]
004E9256  8B CF                     MOV ECX,EDI
004E9258  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E925B  83 F8 29                  CMP EAX,0x29
004E925E  7D 10                     JGE 0x004e9270
004E9260  8B 17                     MOV EDX,dword ptr [EDI]
004E9262  8B CF                     MOV ECX,EDI
004E9264  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E9267  8B 1C 85 9C 0D 7E 00      MOV EBX,dword ptr [EAX*0x4 + 0x7e0d9c]
004E926E  EB 49                     JMP 0x004e92b9
LAB_004e9270:
004E9270  8B 07                     MOV EAX,dword ptr [EDI]
004E9272  8B CF                     MOV ECX,EDI
004E9274  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E9277  83 F8 32                  CMP EAX,0x32
004E927A  7C 38                     JL 0x004e92b4
004E927C  8B 17                     MOV EDX,dword ptr [EDI]
004E927E  8B CF                     MOV ECX,EDI
004E9280  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E9283  83 F8 74                  CMP EAX,0x74
004E9286  7D 2C                     JGE 0x004e92b4
004E9288  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
004E928B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E9291  50                        PUSH EAX
004E9292  E8 20 B7 F1 FF            CALL 0x004049b7
004E9297  8B 17                     MOV EDX,dword ptr [EDI]
004E9299  8A D8                     MOV BL,AL
004E929B  8B CF                     MOV ECX,EDI
004E929D  81 E3 FF 00 00 00         AND EBX,0xff
004E92A3  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004E92A6  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004E92A9  03 D8                     ADD EBX,EAX
004E92AB  8B 1C 9D B0 37 7E 00      MOV EBX,dword ptr [EBX*0x4 + 0x7e37b0]
004E92B2  EB 05                     JMP 0x004e92b9
LAB_004e92b4:
004E92B4  BB 64 00 00 00            MOV EBX,0x64
LAB_004e92b9:
004E92B9  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004E92BF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E92C2  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E92C5  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004E92CA  C1 E1 02                  SHL ECX,0x2
004E92CD  F7 E9                     IMUL ECX
004E92CF  C1 FA 05                  SAR EDX,0x5
004E92D2  8B CA                     MOV ECX,EDX
004E92D4  C1 E9 1F                  SHR ECX,0x1f
004E92D7  03 D1                     ADD EDX,ECX
004E92D9  3B D3                     CMP EDX,EBX
004E92DB  7C 11                     JL 0x004e92ee
004E92DD  8B 86 2C 04 00 00         MOV EAX,dword ptr [ESI + 0x42c]
004E92E3  85 C0                     TEST EAX,EAX
004E92E5  74 07                     JZ 0x004e92ee
004E92E7  B8 01 00 00 00            MOV EAX,0x1
004E92EC  EB 02                     JMP 0x004e92f0
LAB_004e92ee:
004E92EE  33 C0                     XOR EAX,EAX
LAB_004e92f0:
004E92F0  81 BE D8 04 00 00 FF FF 00 00  CMP dword ptr [ESI + 0x4d8],0xffff
004E92FA  0F 85 E5 01 00 00         JNZ 0x004e94e5
004E9300  85 C0                     TEST EAX,EAX
004E9302  0F 84 DD 01 00 00         JZ 0x004e94e5
004E9308  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004E930E  85 C0                     TEST EAX,EAX
004E9310  0F 85 CF 01 00 00         JNZ 0x004e94e5
004E9316  83 BE AC 05 00 00 6C      CMP dword ptr [ESI + 0x5ac],0x6c
004E931D  0F 85 ED 00 00 00         JNZ 0x004e9410
004E9323  8B 86 1B 06 00 00         MOV EAX,dword ptr [ESI + 0x61b]
004E9329  C7 86 E4 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4e4],0xffffffff
004E9333  C7 86 E8 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4e8],0xffffffff
004E933D  C7 86 EC 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x4ec],0xffffffff
004E9347  8B 88 B4 05 00 00         MOV ECX,dword ptr [EAX + 0x5b4]
004E934D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004E9350  8D 59 01                  LEA EBX,[ECX + 0x1]
004E9353  3B CB                     CMP ECX,EBX
004E9355  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004E9358  0F 8F 11 01 00 00         JG 0x004e946f
004E935E  8B B8 B0 05 00 00         MOV EDI,dword ptr [EAX + 0x5b0]
004E9364  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004E9367  8D 57 01                  LEA EDX,[EDI + 0x1]
LAB_004e936a:
004E936A  8B C7                     MOV EAX,EDI
004E936C  3B C2                     CMP EAX,EDX
004E936E  7F 78                     JG 0x004e93e8
004E9370  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004E9373  66 8B 92 B8 05 00 00      MOV DX,word ptr [EDX + 0x5b8]
004E937A  66 42                     INC DX
004E937C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004E937F  EB 03                     JMP 0x004e9384
LAB_004e9381:
004E9381  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_004e9384:
004E9384  66 85 C0                  TEST AX,AX
004E9387  7C 69                     JL 0x004e93f2
004E9389  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
004E9390  66 3B C7                  CMP AX,DI
004E9393  7D 5D                     JGE 0x004e93f2
004E9395  66 85 C9                  TEST CX,CX
004E9398  7C 58                     JL 0x004e93f2
004E939A  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004E93A1  7D 4F                     JGE 0x004e93f2
004E93A3  66 85 D2                  TEST DX,DX
004E93A6  7C 4A                     JL 0x004e93f2
004E93A8  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
004E93AF  7D 41                     JGE 0x004e93f2
004E93B1  0F BF D9                  MOVSX EBX,CX
004E93B4  0F BF FF                  MOVSX EDI,DI
004E93B7  0F AF DF                  IMUL EBX,EDI
004E93BA  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004E93C1  0F BF D2                  MOVSX EDX,DX
004E93C4  0F AF FA                  IMUL EDI,EDX
004E93C7  0F BF D0                  MOVSX EDX,AX
004E93CA  03 DF                     ADD EBX,EDI
004E93CC  03 DA                     ADD EBX,EDX
004E93CE  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004E93D4  83 3C DA 00               CMP dword ptr [EDX + EBX*0x8],0x0
004E93D8  74 18                     JZ 0x004e93f2
004E93DA  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004E93DD  40                        INC EAX
004E93DE  8D 57 01                  LEA EDX,[EDI + 0x1]
004E93E1  3B C2                     CMP EAX,EDX
004E93E3  7E 9C                     JLE 0x004e9381
004E93E5  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_004e93e8:
004E93E8  41                        INC ECX
004E93E9  3B CB                     CMP ECX,EBX
004E93EB  7F 7F                     JG 0x004e946c
004E93ED  E9 78 FF FF FF            JMP 0x004e936a
LAB_004e93f2:
004E93F2  89 86 E4 04 00 00         MOV dword ptr [ESI + 0x4e4],EAX
004E93F8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E93FB  89 8E E8 04 00 00         MOV dword ptr [ESI + 0x4e8],ECX
004E9401  8B 88 B8 05 00 00         MOV ECX,dword ptr [EAX + 0x5b8]
004E9407  41                        INC ECX
004E9408  89 8E EC 04 00 00         MOV dword ptr [ESI + 0x4ec],ECX
004E940E  EB 5C                     JMP 0x004e946c
LAB_004e9410:
004E9410  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004E9413  8D BE F0 04 00 00         LEA EDI,[ESI + 0x4f0]
004E9419  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004E941F  8D 8E EC 04 00 00         LEA ECX,[ESI + 0x4ec]
004E9425  57                        PUSH EDI
004E9426  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004E942C  8D 96 E8 04 00 00         LEA EDX,[ESI + 0x4e8]
004E9432  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004E9435  8D 9E E4 04 00 00         LEA EBX,[ESI + 0x4e4]
004E943B  C1 E8 10                  SHR EAX,0x10
004E943E  50                        PUSH EAX
004E943F  8B 86 38 04 00 00         MOV EAX,dword ptr [ESI + 0x438]
004E9445  51                        PUSH ECX
004E9446  8B 8E 34 04 00 00         MOV ECX,dword ptr [ESI + 0x434]
004E944C  52                        PUSH EDX
004E944D  8B 96 30 04 00 00         MOV EDX,dword ptr [ESI + 0x430]
004E9453  53                        PUSH EBX
004E9454  50                        PUSH EAX
004E9455  51                        PUSH ECX
004E9456  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E9459  52                        PUSH EDX
004E945A  8B 01                     MOV EAX,dword ptr [ECX]
004E945C  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E945F  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E9462  50                        PUSH EAX
004E9463  51                        PUSH ECX
004E9464  E8 49 7E F1 FF            CALL 0x004012b2
004E9469  83 C4 28                  ADD ESP,0x28
LAB_004e946c:
004E946C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_004e946f:
004E946F  8B 86 E4 04 00 00         MOV EAX,dword ptr [ESI + 0x4e4]
004E9475  85 C0                     TEST EAX,EAX
004E9477  7C 6C                     JL 0x004e94e5
004E9479  8B 86 E8 04 00 00         MOV EAX,dword ptr [ESI + 0x4e8]
004E947F  85 C0                     TEST EAX,EAX
004E9481  7C 62                     JL 0x004e94e5
004E9483  8B 86 EC 04 00 00         MOV EAX,dword ptr [ESI + 0x4ec]
004E9489  85 C0                     TEST EAX,EAX
004E948B  7C 58                     JL 0x004e94e5
004E948D  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
004E9490  8B CF                     MOV ECX,EDI
004E9492  89 96 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EDX
004E9498  8B 07                     MOV EAX,dword ptr [EDI]
004E949A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004E949D  89 86 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EAX
004E94A3  A1 CC 0B 80 00            MOV EAX,[0x00800bcc]
004E94A8  85 C0                     TEST EAX,EAX
004E94AA  75 05                     JNZ 0x004e94b1
004E94AC  E8 E4 AE F1 FF            CALL 0x00404395
LAB_004e94b1:
004E94B1  8B 8E EC 04 00 00         MOV ECX,dword ptr [ESI + 0x4ec]
004E94B7  8B 96 E8 04 00 00         MOV EDX,dword ptr [ESI + 0x4e8]
004E94BD  8B 86 E4 04 00 00         MOV EAX,dword ptr [ESI + 0x4e4]
004E94C3  51                        PUSH ECX
004E94C4  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004E94CA  52                        PUSH EDX
004E94CB  50                        PUSH EAX
004E94CC  E8 B1 80 F1 FF            CALL 0x00401582
004E94D1  B8 01 00 00 00            MOV EAX,0x1
004E94D6  5F                        POP EDI
004E94D7  89 86 E0 04 00 00         MOV dword ptr [ESI + 0x4e0],EAX
004E94DD  5E                        POP ESI
004E94DE  5B                        POP EBX
004E94DF  8B E5                     MOV ESP,EBP
004E94E1  5D                        POP EBP
004E94E2  C2 04 00                  RET 0x4
LAB_004e94e5:
004E94E5  5F                        POP EDI
004E94E6  5E                        POP ESI
004E94E7  33 C0                     XOR EAX,EAX
004E94E9  5B                        POP EBX
004E94EA  8B E5                     MOV ESP,EBP
004E94EC  5D                        POP EBP
004E94ED  C2 04 00                  RET 0x4
