FUN_005edc20:
005EDC20  55                        PUSH EBP
005EDC21  8B EC                     MOV EBP,ESP
005EDC23  51                        PUSH ECX
005EDC24  53                        PUSH EBX
005EDC25  56                        PUSH ESI
005EDC26  8B F1                     MOV ESI,ECX
005EDC28  83 CB FF                  OR EBX,0xffffffff
005EDC2B  57                        PUSH EDI
005EDC2C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005EDC2F  66 8B 46 5F               MOV AX,word ptr [ESI + 0x5f]
005EDC33  66 85 C0                  TEST AX,AX
005EDC36  0F 8E 6C 01 00 00         JLE 0x005edda8
005EDC3C  66 8B 56 5D               MOV DX,word ptr [ESI + 0x5d]
005EDC40  8D 48 FF                  LEA ECX,[EAX + -0x1]
005EDC43  66 8B 46 5B               MOV AX,word ptr [ESI + 0x5b]
005EDC47  66 85 C0                  TEST AX,AX
005EDC4A  0F 8C 58 01 00 00         JL 0x005edda8
005EDC50  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
005EDC57  66 3B C7                  CMP AX,DI
005EDC5A  0F 8D 48 01 00 00         JGE 0x005edda8
005EDC60  66 85 D2                  TEST DX,DX
005EDC63  0F 8C 3F 01 00 00         JL 0x005edda8
005EDC69  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005EDC70  0F 8D 32 01 00 00         JGE 0x005edda8
005EDC76  66 85 C9                  TEST CX,CX
005EDC79  0F 8C 29 01 00 00         JL 0x005edda8
005EDC7F  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005EDC86  0F 8D 1C 01 00 00         JGE 0x005edda8
005EDC8C  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005EDC93  0F BF C9                  MOVSX ECX,CX
005EDC96  0F AF D9                  IMUL EBX,ECX
005EDC99  0F BF CF                  MOVSX ECX,DI
005EDC9C  0F BF D2                  MOVSX EDX,DX
005EDC9F  0F AF CA                  IMUL ECX,EDX
005EDCA2  0F BF C0                  MOVSX EAX,AX
005EDCA5  03 D9                     ADD EBX,ECX
005EDCA7  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005EDCAD  03 D8                     ADD EBX,EAX
005EDCAF  8B 3C D9                  MOV EDI,dword ptr [ECX + EBX*0x8]
005EDCB2  85 FF                     TEST EDI,EDI
005EDCB4  0F 84 EB 00 00 00         JZ 0x005edda5
005EDCBA  8B 17                     MOV EDX,dword ptr [EDI]
005EDCBC  8B CF                     MOV ECX,EDI
005EDCBE  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
005EDCC1  83 F8 52                  CMP EAX,0x52
005EDCC4  74 4F                     JZ 0x005edd15
005EDCC6  83 F8 5F                  CMP EAX,0x5f
005EDCC9  74 4A                     JZ 0x005edd15
005EDCCB  8B 07                     MOV EAX,dword ptr [EDI]
005EDCCD  8B CF                     MOV ECX,EDI
005EDCCF  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005EDCD2  83 F8 63                  CMP EAX,0x63
005EDCD5  0F 85 CA 00 00 00         JNZ 0x005edda5
005EDCDB  8B 87 D0 04 00 00         MOV EAX,dword ptr [EDI + 0x4d0]
005EDCE1  BB 02 00 00 00            MOV EBX,0x2
005EDCE6  3B C3                     CMP EAX,EBX
005EDCE8  0F 85 B7 00 00 00         JNZ 0x005edda5
005EDCEE  6A 00                     PUSH 0x0
005EDCF0  6A 9C                     PUSH -0x64
005EDCF2  6A 9C                     PUSH -0x64
005EDCF4  6A 9C                     PUSH -0x64
005EDCF6  6A 01                     PUSH 0x1
005EDCF8  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005EDCFE  E8 C9 75 E1 FF            CALL 0x004052cc
005EDD03  50                        PUSH EAX
005EDD04  E8 9C 74 E1 FF            CALL 0x004051a5
005EDD09  83 C4 18                  ADD ESP,0x18
005EDD0C  8B C3                     MOV EAX,EBX
005EDD0E  5F                        POP EDI
005EDD0F  5E                        POP ESI
005EDD10  5B                        POP EBX
005EDD11  8B E5                     MOV ESP,EBP
005EDD13  5D                        POP EBP
005EDD14  C3                        RET
LAB_005edd15:
005EDD15  8B 8F 08 05 00 00         MOV ECX,dword ptr [EDI + 0x508]
005EDD1B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005EDD1E  3B C8                     CMP ECX,EAX
005EDD20  75 78                     JNZ 0x005edd9a
005EDD22  83 BF D0 04 00 00 03      CMP dword ptr [EDI + 0x4d0],0x3
005EDD29  75 6F                     JNZ 0x005edd9a
005EDD2B  6A 0E                     PUSH 0xe
005EDD2D  8D 8F D5 01 00 00         LEA ECX,[EDI + 0x1d5]
005EDD33  E8 77 65 E1 FF            CALL 0x004042af
005EDD38  8B 97 F5 01 00 00         MOV EDX,dword ptr [EDI + 0x1f5]
005EDD3E  3B 82 0C 02 00 00         CMP EAX,dword ptr [EDX + 0x20c]
005EDD44  75 54                     JNZ 0x005edd9a
005EDD46  8B 86 C6 02 00 00         MOV EAX,dword ptr [ESI + 0x2c6]
005EDD4C  8B 8E C2 02 00 00         MOV ECX,dword ptr [ESI + 0x2c2]
005EDD52  8B 96 BE 02 00 00         MOV EDX,dword ptr [ESI + 0x2be]
005EDD58  50                        PUSH EAX
005EDD59  8B 06                     MOV EAX,dword ptr [ESI]
005EDD5B  51                        PUSH ECX
005EDD5C  52                        PUSH EDX
005EDD5D  8B CE                     MOV ECX,ESI
005EDD5F  FF 90 38 01 00 00         CALL dword ptr [EAX + 0x138]
005EDD65  8B 16                     MOV EDX,dword ptr [ESI]
005EDD67  50                        PUSH EAX
005EDD68  8B CE                     MOV ECX,ESI
005EDD6A  FF 92 30 01 00 00         CALL dword ptr [EDX + 0x130]
005EDD70  50                        PUSH EAX
005EDD71  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005EDD74  50                        PUSH EAX
005EDD75  8B CF                     MOV ECX,EDI
005EDD77  E8 EA 76 E1 FF            CALL 0x00405466
005EDD7C  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
005EDD80  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
005EDD83  51                        PUSH ECX
005EDD84  52                        PUSH EDX
005EDD85  8B CE                     MOV ECX,ESI
005EDD87  E8 F0 3D E1 FF            CALL 0x00401b7c
005EDD8C  BB 01 00 00 00            MOV EBX,0x1
005EDD91  5F                        POP EDI
005EDD92  8B C3                     MOV EAX,EBX
005EDD94  5E                        POP ESI
005EDD95  5B                        POP EBX
005EDD96  8B E5                     MOV ESP,EBP
005EDD98  5D                        POP EBP
005EDD99  C3                        RET
LAB_005edd9a:
005EDD9A  33 DB                     XOR EBX,EBX
005EDD9C  5F                        POP EDI
005EDD9D  8B C3                     MOV EAX,EBX
005EDD9F  5E                        POP ESI
005EDDA0  5B                        POP EBX
005EDDA1  8B E5                     MOV ESP,EBP
005EDDA3  5D                        POP EBP
005EDDA4  C3                        RET
LAB_005edda5:
005EDDA5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_005edda8:
005EDDA8  5F                        POP EDI
005EDDA9  8B C3                     MOV EAX,EBX
005EDDAB  5E                        POP ESI
005EDDAC  5B                        POP EBX
005EDDAD  8B E5                     MOV ESP,EBP
005EDDAF  5D                        POP EBP
005EDDB0  C3                        RET
