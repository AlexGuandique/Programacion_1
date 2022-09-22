class Base {
    public:
        int x;
    protected:
        int y;
    private:
        int z;
};

class PublicDerived: public Base {
    // x es de acceso public
    // y es de acceso protected
    // z no es accessible para PublicDerived
};

class ProtectedDerived: protected Base {
    // x es de acceso protected
    // y es de acceso protected
    // z no es accessible para ProtectedDerived
};

class PrivateDerived: private Base {
    // x es de acceso private
    // y es de acceso private
    // z no es accessible para PrivateDerived

};