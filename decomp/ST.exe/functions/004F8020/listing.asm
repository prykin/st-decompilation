CPanelTy::sub_004F8020:
004F8020  55                        PUSH EBP
004F8021  8B EC                     MOV EBP,ESP
004F8023  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
004F8026  8D 81 63 0B 00 00         LEA EAX,[ECX + 0xb63]
004F802C  84 D2                     TEST DL,DL
004F802E  75 06                     JNZ 0x004f8036
004F8030  8D 81 51 0C 00 00         LEA EAX,[ECX + 0xc51]
LAB_004f8036:
004F8036  80 38 00                  CMP byte ptr [EAX],0x0
004F8039  74 3D                     JZ 0x004f8078
004F803B  A1 84 87 80 00            MOV EAX,[0x00808784]
004F8040  85 C0                     TEST EAX,EAX
004F8042  75 34                     JNZ 0x004f8078
004F8044  A1 88 87 80 00            MOV EAX,[0x00808788]
004F8049  85 C0                     TEST EAX,EAX
004F804B  75 2B                     JNZ 0x004f8078
004F804D  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004F8052  85 C0                     TEST EAX,EAX
004F8054  75 22                     JNZ 0x004f8078
004F8056  A1 90 87 80 00            MOV EAX,[0x00808790]
004F805B  85 C0                     TEST EAX,EAX
004F805D  75 19                     JNZ 0x004f8078
004F805F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004F8062  33 C9                     XOR ECX,ECX
004F8064  84 D2                     TEST DL,DL
004F8066  50                        PUSH EAX
004F8067  6A 00                     PUSH 0x0
004F8069  0F 94 C1                  SETZ CL
004F806C  51                        PUSH ECX
004F806D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004F8073  E8 FD 97 F0 FF            CALL 0x00401875
LAB_004f8078:
004F8078  5D                        POP EBP
004F8079  C2 08 00                  RET 0x8
