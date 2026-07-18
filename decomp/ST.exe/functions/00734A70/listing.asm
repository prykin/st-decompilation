__ms_p5_mp_test_fdiv:
00734A70  55                        PUSH EBP
00734A71  8B EC                     MOV EBP,ESP
00734A73  83 EC 08                  SUB ESP,0x8
00734A76  68 9C 01 7A 00            PUSH 0x7a019c
00734A7B  FF 15 4C BC 85 00         CALL dword ptr [0x0085bc4c]
00734A81  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00734A84  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00734A88  74 1F                     JZ 0x00734aa9
00734A8A  68 80 01 7A 00            PUSH 0x7a0180
00734A8F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00734A92  50                        PUSH EAX
00734A93  FF 15 BC BC 85 00         CALL dword ptr [0x0085bcbc]
00734A99  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00734A9C  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
00734AA0  74 07                     JZ 0x00734aa9
00734AA2  6A 00                     PUSH 0x0
00734AA4  FF 55 F8                  CALL dword ptr [EBP + -0x8]
00734AA7  EB 05                     JMP 0x00734aae
LAB_00734aa9:
00734AA9  E8 62 FF FF FF            CALL 0x00734a10
LAB_00734aae:
00734AAE  8B E5                     MOV ESP,EBP
00734AB0  5D                        POP EBP
00734AB1  C3                        RET
