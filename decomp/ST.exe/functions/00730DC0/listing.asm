__nh_malloc_base:
00730DC0  55                        PUSH EBP
00730DC1  8B EC                     MOV EBP,ESP
00730DC3  51                        PUSH ECX
00730DC4  83 7D 08 E0               CMP dword ptr [EBP + 0x8],-0x20
00730DC8  76 04                     JBE 0x00730dce
00730DCA  33 C0                     XOR EAX,EAX
00730DCC  EB 45                     JMP 0x00730e13
LAB_00730dce:
00730DCE  83 7D 08 E0               CMP dword ptr [EBP + 0x8],-0x20
00730DD2  77 11                     JA 0x00730de5
00730DD4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730DD7  50                        PUSH EAX
00730DD8  E8 43 00 00 00            CALL 0x00730e20
00730DDD  83 C4 04                  ADD ESP,0x4
00730DE0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00730DE3  EB 07                     JMP 0x00730dec
LAB_00730de5:
00730DE5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_00730dec:
00730DEC  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00730DF0  75 06                     JNZ 0x00730df8
00730DF2  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00730DF6  75 05                     JNZ 0x00730dfd
LAB_00730df8:
00730DF8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00730DFB  EB 16                     JMP 0x00730e13
LAB_00730dfd:
00730DFD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730E00  51                        PUSH ECX
00730E01  E8 6A FF FF FF            CALL 0x00730d70
00730E06  83 C4 04                  ADD ESP,0x4
00730E09  85 C0                     TEST EAX,EAX
00730E0B  75 04                     JNZ 0x00730e11
00730E0D  33 C0                     XOR EAX,EAX
00730E0F  EB 02                     JMP 0x00730e13
LAB_00730e11:
00730E11  EB BB                     JMP 0x00730dce
LAB_00730e13:
00730E13  8B E5                     MOV ESP,EBP
00730E15  5D                        POP EBP
00730E16  C3                        RET
