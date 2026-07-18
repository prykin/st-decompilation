FUN_004e6b40:
004E6B40  55                        PUSH EBP
004E6B41  8B EC                     MOV EBP,ESP
004E6B43  51                        PUSH ECX
004E6B44  53                        PUSH EBX
004E6B45  56                        PUSH ESI
004E6B46  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
004E6B49  8B D1                     MOV EDX,ECX
004E6B4B  57                        PUSH EDI
004E6B4C  B9 07 00 00 00            MOV ECX,0x7
004E6B51  33 C0                     XOR EAX,EAX
004E6B53  8B FE                     MOV EDI,ESI
004E6B55  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004E6B58  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004E6B5B  F3 AB                     STOSD.REP ES:EDI
004E6B5D  66 AB                     STOSW ES:EDI
004E6B5F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E6B62  53                        PUSH EBX
004E6B63  50                        PUSH EAX
004E6B64  8B CA                     MOV ECX,EDX
004E6B66  E8 D2 D5 F1 FF            CALL 0x0040413d
004E6B6B  85 C0                     TEST EAX,EAX
004E6B6D  75 69                     JNZ 0x004e6bd8
004E6B6F  8A 84 5B D2 0D 7C 00      MOV AL,byte ptr [EBX + EBX*0x2 + 0x7c0dd2]
004E6B76  BF 01 00 00 00            MOV EDI,0x1
004E6B7B  84 C0                     TEST AL,AL
004E6B7D  74 59                     JZ 0x004e6bd8
004E6B7F  EB 03                     JMP 0x004e6b84
LAB_004e6b81:
004E6B81  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_004e6b84:
004E6B84  83 FF 03                  CMP EDI,0x3
004E6B87  7D 4F                     JGE 0x004e6bd8
004E6B89  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E6B8C  8D 9C 5B D1 0D 7C 00      LEA EBX,[EBX + EBX*0x2 + 0x7c0dd1]
004E6B93  33 C9                     XOR ECX,ECX
004E6B95  8A 0C 3B                  MOV CL,byte ptr [EBX + EDI*0x1]
004E6B98  51                        PUSH ECX
004E6B99  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E6B9C  52                        PUSH EDX
004E6B9D  E8 C9 AC F1 FF            CALL 0x0040186b
004E6BA2  85 C0                     TEST EAX,EAX
004E6BA4  75 29                     JNZ 0x004e6bcf
004E6BA6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E6BA9  8A 04 3B                  MOV AL,byte ptr [EBX + EDI*0x1]
004E6BAC  51                        PUSH ECX
004E6BAD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E6BB0  89 06                     MOV dword ptr [ESI],EAX
004E6BB2  E8 00 DE F1 FF            CALL 0x004049b7
004E6BB7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E6BBA  88 46 04                  MOV byte ptr [ESI + 0x4],AL
004E6BBD  8B 16                     MOV EDX,dword ptr [ESI]
004E6BBF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E6BC2  52                        PUSH EDX
004E6BC3  50                        PUSH EAX
004E6BC4  E8 CD C7 F1 FF            CALL 0x00403396
004E6BC9  88 46 05                  MOV byte ptr [ESI + 0x5],AL
004E6BCC  83 C6 06                  ADD ESI,0x6
LAB_004e6bcf:
004E6BCF  8A 44 3B 01               MOV AL,byte ptr [EBX + EDI*0x1 + 0x1]
004E6BD3  47                        INC EDI
004E6BD4  84 C0                     TEST AL,AL
004E6BD6  75 A9                     JNZ 0x004e6b81
LAB_004e6bd8:
004E6BD8  5F                        POP EDI
004E6BD9  5E                        POP ESI
004E6BDA  5B                        POP EBX
004E6BDB  8B E5                     MOV ESP,EBP
004E6BDD  5D                        POP EBP
004E6BDE  C2 0C 00                  RET 0xc
