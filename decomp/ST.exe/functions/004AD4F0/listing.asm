FUN_004ad4f0:
004AD4F0  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
004AD4F3  85 C0                     TEST EAX,EAX
004AD4F5  74 04                     JZ 0x004ad4fb
004AD4F7  C6 41 10 01               MOV byte ptr [ECX + 0x10],0x1
LAB_004ad4fb:
004AD4FB  C3                        RET
